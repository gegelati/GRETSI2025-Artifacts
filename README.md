# PPSN 2024 Artifacts

To execute the code, first clone the code and install the library
```
$ git clone https://github.com/gegelati/GRETSI2025.git
$ cd GRETSI_2025/armlearn-wrapper
$ ./scripts/dependencies_installation.sh
```

Then compile the wrapper code
```
$ mkdir build && cd build
& cmake .. && cmake --build .
```

Different executables are created 


## things


This repository is associated to the following publication **(under review)**:

*Q. Vacher, N. Beuve, P. Allaire, T. Marty, M. Dardaillon and K. Desnos. Low-complexity Genetic Reinforcement Learning for Robot Arm Trajectory Planning*

The repository contains:
* Code and scripts to reproduce the experiments presented in the paper.
* Experimental data and logs produced by the authors and presented in the paper.

## Repository content
```
├─ sips22-artifacts                                  # root folder
│  │                                           
│  ├─ gegelati                                       # git submodule pointing to gegelati develop commit: 9b4092f
│  │  │...                                     
│  │                                           
│  ├─ armlearn-wrapper                               # git submodule pointing to the ArmLearn Environment
│  │  │...                                           # wrapper for gegelati.
│  │
│  ├─ Notebook.ipynb                                 # Jupyter Notebook with Julia Kernel for plotting interesting 
│  │                                                 # results from experiments.
│  │   
│  ├─ data                                           # Experimental data.
│  │  │                                        
│  │  │                                        
│  │  │                                        
│  │  ├─ GegelatiExperimentalStudy                   # Folder containing the performances of all the
│  │  │  │                                           # configurations tested for 2 hours
│  │  │  │
│  │  │  ├─ config_0_0                               # One configuration and seed.
│  │  │  │  
│  │  │  │  ├─ outLogs                               # Folder of logs.
│  │  │  │  │
│  │  │  │  │  ├─ codeGen                            # Folder with the code generation
│  │  │  │  │  │
│  │  │  │  │  ├─ logsGegelati.ods                   # Logs from the training.               
│  │  │  │  │  │
│  │  │  │  │  ├─ bestPolicyStats.md                 # Statistics of champion TPGs throughout the generations.
│  │  │  │  │  │                      
│  │  │  │  │  ├─ out_best.dot                       # Champion TPG after all generations.
│  │  │  │  │  │
│  │  │  │  │  ├─ out_best_cleaned.dot               # Champion cleaned from any useless teams and programs.
│  │  │  │  │  │
│  │  │  │  │  ├─ out_best_stats.md                  # Statistics about the champion.
│  │  │  │  │  │
│  │  │  │  │  ├─ out_best_stats_cleaned.md          # Statistics about the cleaned chamion.
│  │  │  │  │  │
│  │  │  │  │  ├─ outputGegelati.csv                 # Logs from the testing.
│  │  │  │  |
│  │  │  │  ├─ params                                # Folder with the parameters.
│  │  │  ├─ ...       
│  │  │
│  │  ├─ GegelatiFinalTests                          # Folder containing the performances of the last
│  │  │                                              # configuration tested for 12 hours
│  │  │  
│  │  ├─ SAC                                         # Folder containing the performances of the SAC
│  │   
│  ├─ results                                        # Folder with the different figures obained
```
