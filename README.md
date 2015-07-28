# discovery-stem
Discovery Stem Lessons

# Python Lessons
Several lessons will be run in special IPython notebooks. To run them, we need the following programs:
* IPython - You probably have this.
* nbgrader -  to install, use
```
pip install nbgrader
nbgrader extension install
nbgrader extension activate
```

# Arduino Lessons

The Arduino lessons will start from a file of the form `[lesson name]_base.ino`.

Throughout the lesson, this file will be modified to produce a desired
behavior.  

So that the instructors know what should eventually happen, a complete
working file is stored in `[lesson name]_complete.ino`.

In order to start the lesson over, you can revert the changes you made
to `[lesson_name]_base.ino` by using the command:

```
git stash
```

# Lesson 1 - Programming

The first session will consist of two sessions to be run in parallel.

* [Python Programming](#python)
* [Arduino Programming](arduino_programming.md)

# Lesson 2 

* [Modeling](#modeling)
* [Sensors and Actuators](sensor_IMU.md)


# <a name="python"></a>Python Programming

This lesson requires nbgrader, as described above. 

To generate the lesson use (from the repository directory)
```
nbgrader assign --create --force python_programming
```

Start IPython Notebook. On command line use
```
ipython notebook
```

The lesson file will be located at
```
[repository directory]/release/python_programming/python_programming.ipynb
```

# <a name="modeling"></a>Modeling and Simulation

This lesson requires nbgrader, as described above. 

To generate the lesson use (from the repository directory)
```
nbgrader assign --create --force Modeling
```

Start IPython Notebook. On command line use
```
ipython notebook
```

The lesson file will be located at
```
[repository directory]/release/Modeling/Modeling.ipynb
```

