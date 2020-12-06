from distutils.dir_util import copy_tree

fromdir = "godot/modules/Spacecavatemodules"
todir = "Spacecavatemodules"

copy_tree(fromdir,todir)