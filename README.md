# GRETSI 2025 Artefacts

Ce répertoire est associé à la publication suivante **(under review)** :

*Q. Vacher, N. Beuve, P. Allaire, T. Marty, M. Dardaillon and K. Desnos. Graphes de Programmes Intriqués Appliqués à la Prédiction de Trajectoire de Bras Robotique*

Ce répertoire contient:
* Le code et les scripts pour reproduire les expérimentations du papier.
* Les données expérérimentales et le notebook pour calculer les résultats.


## Exécution du code

Pour exécuter le code, il faut d'abord le cloner et installer la bibliothèque, cela peut prendre quelques minutes.
```
$ git clone --recurse-submodules  https://github.com/gegelati/GRETSI2025-Artifacts.git
$ cd GRETSI_2025/armlearn-wrapper
$ sudo ./scripts/dependencies_installation.sh
```

Puis, compilez le code du wrapper du bras robotique.

```
mkdir build && cd build
cmake .. && cmake --build . -j
cd ..
```

Cinq exécutables sont créés.

* armGegelati : le principal exécutable pour entraîner ou tester un TPG sur le wrapper du bras robotique.
* armMultipleTraining : pour lancer plusieurs entraînements sur plusieurs configurations indiquées dans le dossier « params/repoConfig ».
* armGraphPruner : pour élaguer un TPG après l'entraînement et générer le code C.
* armCodeGen : pour exécuter le code généré et exporter les données d'inférence dans outputGegelati.csv.
* armGrabGegelati/armGrabStandalone : pour utiliser le TPG ou des coordonnées brutes sur le bras physique (inutilisable dans ce cas).

Différents exécutables sont créés, vous pouvez les utiliser en les exécutant. 

```
./build/armGegelati
./build/armGraphPruner 
etc...
```

Un dossier "params" se trouve dans le dossier armlearn-wrapper.
Dans ce dossier "params" se trouve les fichiers de configuration pour modifier l'entrainement.
Notamment dans params.json: 
* maxNbActionsPerEval: permet de modifier le nombre d'actions (par défaut 1500 actions)
* mutation.tpg.nbRoots: permet de modifier le nombre d'agents (par défaut 2000 agents)

Diminuer ces deux valeurs permet de tester le code plus rapidement.

## Contenu de répertoire
```
├─ GRETSI2025-artifacts                              # Dossier racine.
│  │                                                                       
│  │                                           
│  ├─ armlearn-wrapper                               # git submodule pointant vers le wrapper du bras robot.
│  │
│  ├─ ScriptPubli.ipynb                              # Jupyter Notebook avec l'étude des résultats'.
│  │
│  ├─ README.md                                     
│  │   
│  ├─ data                                           # Experimental data.
│  │  │                                        
│  │  │                                        
│  │  │                                        
│  │  │
│  │  ├─ config_0_0                                  # Une configuration et une graine.
│  │  │  
│  │  │  ├─ outLogs                                  # Dossier de logs.
│  │  │  │
│  │  │  │  ├─ codeGen                               # Dossier avec le code généré.
│  │  │  │  │
│  │  │  │  ├─ bestPolicyStats.md                    # Statistiques du champion de chaque génération.
│  │  │  │  │
│  │  │  │  ├─ logsGegelati.ods                      # Logs d'entrainement.               
│  │  │  │  │
│  │  │  │  ├─ out_best_cleaned.dot                  # dotfiles du champion final après élagage.
│  │  │  │  │
│  │  │  │  ├─ out_best_stats_cleaned.md             # Statistiques du champion final après élagage.
│  │  │  │  │
│  │  │  │  ├─ out_best_stats.md                     # Statistiques du champion final.
│  │  │  │  │                      
│  │  │  │  ├─ out_best.dot                          # otfiles du champion final.
│  │  │  │  │
│  │  │  │  ├─ outputGegelati.csv                    # Logs des tests.
│  │  │  |
│  │  │  ├─ params                                   # Dossier contenant les paramètres.
│  │  ├─ ...       
│  │
│  ├─ results                                        # Dossier avec les figures créées.
```
