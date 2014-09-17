Project generator - mbed SDK with project generator
=========================

This example repository shows how to use project generator to generate projects. mbed SDK is a submodule.

Look at records, how records are defined. I would like to expand this to more targets, tools and features.

How to use it
------------

To generate a project, run export.py script, from tools directory. As shown below (uvision is default tool, can be selected using -t option):

<pre>
project_generator_mbed_examples\tools>python project_generator/export.py -f records/projects.yaml -p k20_blinky -t uvision
</pre>

The output:
<pre>
DEBUG:root:This should be the project root: c:\Code\git_repo\github\project_gene
rator_mbed_examples
Processing projects file.
INFO:root:Generating project: k20_blinky
DEBUG:root:Generating: uvision_project_files\k20d50m_blinky\k20d50m_blinky.uvproj
DEBUG:root:Generating: uvision_project_files\k20d50m_blinky\k20d50m_blinky.uvopt
</pre>

If you want to build exported project/projects, use -b.

Status
------------

Target - K20D50M, LPC1768
Toolchain - uVision, GCC ARM (Makefile), IAR
Examples - blinky demo

Further information
-------------------------
* [Project generator github repository](https://github.com/0xc0170/project_generator)

The documentation to the project generator is in the repo wiki. If you have a question, create an issue, or find my contact email from git log :)

EnjoY!
