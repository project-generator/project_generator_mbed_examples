Project generator - mbed example
=========================

This example repository shows how to use project generator to generate projects. Look at records, how records are defined. I would like to expand this for more targets, toolchains and features.

How to use it
------------

To generate a project, run export.py script, from tools directory. As shown below:

<pre>
project_generator_mbed_examples\tools>python project_generator/export.py -f records/projects.yaml -p k20_blinky
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

Status
------------

Target - K20D50M
Toolchain - uVision
Examples - blinky demo

Further information
-------------------------
* [Project generator github repository](https://github.com/0xc0170/project_generator)

If you have a question, contact me through mbed or just create an issue, or find my contact email from git log :)

EnjoY!
