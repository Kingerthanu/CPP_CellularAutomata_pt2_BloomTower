# CPP_CellularAutomata_pt2_BloomTower
A C++ OpenGL Hexagonal-Grid Cellular Automata Using Probability And Sine Waves To Create Breathing System. This is another file dump of my hexagonal-grid framework for cellular automata with some things changed in my Cell class, as well as giving a bigger grid to work with for more detailed patterns. Currently is being inefficient with color scaling and wish to do uniform passing of brightness scalars for each cell instead of manually changing the buffer data as is chugging CPU runtime.
This project gave me a very interesting look into how Sine and Cosine can be used in real world applications of algorithms for "seasonal" dialing.

<img src="https://github.com/Kingerthanu/CPP_CellularAutomata_pt2_BloomTower/assets/76754592/da80eed3-455b-49ca-9359-85a1d9c794f8" alt="Cornstarch <3" width="115" height="99">

Also probability in this project gave me a much more comfortable understanding on how we can use probability in our conditionals and thinking of its implementation more as a abstract trait of our given cells.

----------------------------------------------------------------------------

<img src="https://github.com/Kingerthanu/CPP_CellularAutomata_pt2_BloomTower/assets/76754592/a09db4d7-1aff-4746-a57a-2d2b6dcb9bb4" alt="Cornstarch <3" width="55" height="49"><img src="https://github.com/Kingerthanu/CPP_CellularAutomata_pt2_BloomTower/assets/76754592/a09db4d7-1aff-4746-a57a-2d2b6dcb9bb4" alt="Cornstarch <3" width="55" height="49"><img src="https://github.com/Kingerthanu/CPP_CellularAutomata_pt2_BloomTower/assets/76754592/a09db4d7-1aff-4746-a57a-2d2b6dcb9bb4" alt="Cornstarch <3" width="55" height="49"><img src="https://github.com/Kingerthanu/CPP_CellularAutomata_pt2_BloomTower/assets/76754592/a09db4d7-1aff-4746-a57a-2d2b6dcb9bb4" alt="Cornstarch <3" width="55" height="49">


**The Breakdown:**

  Our Program Works With OpenGL And A GLSL Window In Order To Enable Visualization Of Our Relationships.
  
  This Program Works With A 2D-Array In Which Represents a 2D Hexagonal Grid. Each Cell Of The Hexagonal Grid Is Represented With Its Own Class In Which Either Can Be Alive Or Dead. 
  This State Is Determined By The State Of Its Neighbors And If Their Alive. At Each Game Tick, We Will Check Each Cell In The Grid Under A Modified Situation Of The Game Of Life. 

  Currently Our Game Of Life Works With A Wave Of Death And Birth. In Our Demo Example Below We See Blooming Of Our Alive Cells Because We Have A Sine Function In Which Is Reading In Our Game Ticks And At Certain Intervals Is Enabling A Session Where The Cells Can Repopulate (While Also Following Certain Over/Under Population Rules Defined In The Ruleset).

  All Our Cells Have A Fade-In Visual Effect bc It Kindaaaaaa Looks Cool And Also Adds Less Visual Strain And Easier Displays Of Depth As Further Layers Will Fade In Later Than Closer Ones In Which Are Generated Before.


<img src="https://github.com/Kingerthanu/CPP_CellularAutomata_pt2_BloomTower/assets/76754592/274bf657-6438-4475-b00b-c20deacb7f8c" alt="Cornstarch <3" width="55" height="49"><img src="https://github.com/Kingerthanu/CPP_CellularAutomata_pt2_BloomTower/assets/76754592/274bf657-6438-4475-b00b-c20deacb7f8c" alt="Cornstarch <3" width="55" height="49"><img src="https://github.com/Kingerthanu/CPP_CellularAutomata_pt2_BloomTower/assets/76754592/274bf657-6438-4475-b00b-c20deacb7f8c" alt="Cornstarch <3" width="55" height="49"><img src="https://github.com/Kingerthanu/CPP_CellularAutomata_pt2_BloomTower/assets/76754592/274bf657-6438-4475-b00b-c20deacb7f8c" alt="Cornstarch <3" width="55" height="49">

----------------------------------------------------------------------------

<img src="https://github.com/Kingerthanu/CPP_CellularAutomata_pt2_BloomTower/assets/76754592/4adedc17-8471-4b0a-a807-9a64fc3ed85c" alt="Cornstarch <3" width="75" height="49"><img src="https://github.com/Kingerthanu/CPP_CellularAutomata_pt2_BloomTower/assets/76754592/4adedc17-8471-4b0a-a807-9a64fc3ed85c" alt="Cornstarch <3" width="75" height="49"><img src="https://github.com/Kingerthanu/CPP_CellularAutomata_pt2_BloomTower/assets/76754592/4adedc17-8471-4b0a-a807-9a64fc3ed85c" alt="Cornstarch <3" width="75" height="49"><img src="https://github.com/Kingerthanu/CPP_CellularAutomata_pt2_BloomTower/assets/76754592/4adedc17-8471-4b0a-a807-9a64fc3ed85c" alt="Cornstarch <3" width="75" height="49">

**Features:**

![bloomBurg-ezgif com-optimize](https://github.com/Kingerthanu/CPP_CellularAutomata_pt2_BloomTower/assets/76754592/0766cf13-5890-4f79-a3a8-c9452a4856c8)

<img src="https://github.com/Kingerthanu/CPP_CellularAutomata_pt2_BloomTower/assets/76754592/cfbf498f-6979-43fa-a040-4ad24c3a509d" alt="Cornstarch <3" width="55" height="49"> <img src="https://github.com/Kingerthanu/CPP_CellularAutomata_pt2_BloomTower/assets/76754592/cfbf498f-6979-43fa-a040-4ad24c3a509d" alt="Cornstarch <3" width="55" height="49"> <img src="https://github.com/Kingerthanu/CPP_CellularAutomata_pt2_BloomTower/assets/76754592/cfbf498f-6979-43fa-a040-4ad24c3a509d" alt="Cornstarch <3" width="55" height="49"> <img src="https://github.com/Kingerthanu/CPP_CellularAutomata_pt2_BloomTower/assets/76754592/cfbf498f-6979-43fa-a040-4ad24c3a509d" alt="Cornstarch <3" width="55" height="49">
