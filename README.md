# esy-nantes-tutorial


[![CircleCI](https://circleci.com/gh/yourgithubhandle/esy-nantes-tutorial/tree/master.svg?style=svg)](https://circleci.com/gh/yourgithubhandle/esy-nantes-tutorial/tree/master)


**Contains the following libraries and executables:**

```
esy-nantes-tutorial@0.0.0
│
├─test/
│   name:    TestEsyNantesTutorial.exe
│   main:    TestEsyNantesTutorial
│   require: esy-nantes-tutorial.lib
│
├─library/
│   library name: esy-nantes-tutorial.lib
│   namespace:    EsyNantesTutorial
│   require:
│
└─executable/
    name:    EsyNantesTutorialApp.exe
    main:    EsyNantesTutorialApp
    require: esy-nantes-tutorial.lib
```

## Developing:

```
npm install -g esy
git clone <this-repo>
esy install
esy build
```

## Running Binary:

After building the project, you can run the main binary that is produced.

```
esy x EsyNantesTutorialApp.exe 
```

## Running Tests:

```
# Runs the "test" command in `package.json`.
esy test
```
