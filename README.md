# HelloWorld
Hello World Sample Application

This project shows just how easy it is to write programs for Stratify OS.  Stratity OS takes care of all the hardware initialization (including stdio initialization) so you can just start writing code.

If you haven't already done so, you need to get set up with some hardware and the software tools.  You can get more info on that here:  http://stratifylabs.co/download/

Once you have some hardware and the tools are running.  You need to either clone or download the zip file for this project then import it to your workspace.  If you haven't imported a project to eclipse, here is a walkthrough:  http://agile.csc.ncsu.edu/SEMaterials/tutorials/import_export/

Once the project is imported, hit the hammer icon.  The dropdown will give you two build options.  One is for the armv7m (Cortex M3).  The other is armv7em-fpu (Cortex M4F).  The Cortex M3 will run on both platforms.  So if you aren't sure which one to use, go with armv7m.

After the project is built, you can install and run it using Stratify Link.  Once the settings are correct, you push the download arrow in the bottom right corner of the window.

![Preview](https://github.com/StratifyLabs/HelloWorld/blob/master/doc/Install-hello-world.png)

After the program is installed, it will run automatically.

![Preview](https://github.com/StratifyLabs/HelloWorld/blob/master/doc/run-hello-world.png)
