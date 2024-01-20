#ifndef CELL_2_H
#define CELL_2_H

#include "Vertex.h"
#include <glad/glad.h>

class Cell_Gen2
{

private:
	bool state = false;
	int offset;
	char NEIGHBORS_SIZE = 0;

public:
	Cell_Gen2** NEIGHBORS = new Cell_Gen2*[0];


	Cell_Gen2(const int& blockOffset)
	{

		this->offset = blockOffset;

	};

	void addNeighbor(Cell_Gen2& newNeighbor)
	{

		Cell_Gen2** tmp = new Cell_Gen2 * [NEIGHBORS_SIZE + 1];

		for (int index = 0; index < this->NEIGHBORS_SIZE; index++) {

			tmp[index] = this->NEIGHBORS[index];

		}

		tmp[this->NEIGHBORS_SIZE++] = &newNeighbor;

		delete[] this->NEIGHBORS;

		this->NEIGHBORS = tmp;


	};

	float cnt = 0.0f;
	int birthCycle = 0;


	void think()
	{

		char amntAlive = 0;

		for (char i = 0; i < this->NEIGHBORS_SIZE; i++) {

			if (this->NEIGHBORS[i]->state) {

				amntAlive++;

			}

		}

		bool prevState = this->state;

		rand();

		// Sine wave modulation
		float sineValue = 0.48f * sin(offset * cnt);  // Adjust the frequency and amplitude as needed

		// Rules for wave propagation
		if (this->state) {
			// Deactivation rule for active cells
			if (amntAlive > 2 && ((rand()% 100) < 65) && sineValue < 0.0f) {
				this->state = false;
			}
		}
		else{
			// Activation rule for inactive cells
			if (amntAlive >= 1 && sineValue >= 0.475f && birthCycle < 1) {
				this->state = true;
				birthCycle++;
			}
		}

		this->turnOn();
		
		cnt += 0.000000142f;

	};


	void grabNeighbors(Cell_Gen2***& cells, const int& maxRow, const int& maxCol,  const int& row, const int& col)
	{

		if (!(row & 1)) {

			if (row + 2 < maxRow) {

				this->addNeighbor(*cells[row + 2][col]);

			}

			if (row - 1 > -1) {

				this->addNeighbor(*cells[row - 1][col]);

				if (col - 1 > -1) {
				
					this->addNeighbor(*cells[row - 1][col - 1]);

				}

			}
			
			if (row - 2 > -1) {

				this->addNeighbor(*cells[row - 2][col]);

			}

			if (row + 1 < maxRow) {

				this->addNeighbor(*cells[row + 1][col]);

				if (col - 1 > -1) {

					this->addNeighbor(*cells[row + 1][col - 1]);

				}

			}

		}
		else {


			if (row + 2 < maxRow) {

				this->addNeighbor(*cells[row + 2][col]);

			}

			if (row - 1 > -1) {

				this->addNeighbor(*cells[row - 1][col]);

				if (col + 1 < maxCol) {
				
					this->addNeighbor(*cells[row - 1][col + 1]);

				}

			}
			
			if (row - 2 > -1) {

				this->addNeighbor(*cells[row - 2][col]);

			}

			if (row + 1 < maxRow) {

				this->addNeighbor(*cells[row + 1][col]);

				if (col + 1 < maxCol) {

					this->addNeighbor(*cells[row + 1][col + 1]);

				}

			}


		}

	};

	void spark()
	{

		this->state = true;

	};

	void turnOn()
	{

		Vertex* bufferData = static_cast<Vertex*>(glMapBuffer(GL_ARRAY_BUFFER, GL_READ_WRITE));

		if (this->state) {

			// Check if the mapping was successful
			if (bufferData != nullptr) {
				std::random_device rd;
				std::mt19937 gen(rd());

				std::uniform_real_distribution<float> indexColor = std::uniform_real_distribution<float>(0.00f, 1.00f);


				// Update all vertices in the buffer
				for (int i = this->offset, newOffset = this->offset + 6; i < newOffset; i++) {
					bufferData[i].color += (glm::vec3(0.0005f, 0.0005f, 0.00085f) * 2.0f);
				}

				// Unmap the buffer to apply the changes
				glUnmapBuffer(GL_ARRAY_BUFFER);
			}
		}
		else {

			// Check if the mapping was successful
			if (bufferData != nullptr) {

				// Update all vertices in the buffer
				for (int i = this->offset, newOffset = this->offset + 6; i < newOffset; i++) {
					bufferData[i].color = glm::vec3(0.0f, 0.0f, 0.0f);
				}

				// Unmap the buffer to apply the changes
				glUnmapBuffer(GL_ARRAY_BUFFER);
			}

		}

	};

};

#endif
