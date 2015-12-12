Project generator - mbed SDK example with project generator
=========================

This example repository shows how to use project generator to generate projects. mbed SDK is a submodule.

Look at records, how records are defined. I would like to expand this to more targets, tools and features.

How to use it
------------

Get project_generator from the [pypi](https://pypi.python.org/pypi/project_generator) - use pip or easy install or anything similar. This should download and install the package, allow us to use project_generator.

```
progen generate -f projects.yaml -p k20d50m_blinky -t uvision
```

If you want to build generaed project/projects, use -b argument.

Status
------------

Target - K20D50M, LPC1768, K64F, Disco f407vg
Tools - uVision, GCC ARM (Makefile), IAR, CoIDE, Eclipse GNU ARM Makefile, CMake
Examples - blinky demo

Further information
-------------------------
* [Project generator github repository](https://github.com/project-generator/project_generator)

The documentation to the project generator is in the repo wiki. If you have a question, create an issue, or find my contact email from git log :)

EnjoY!
