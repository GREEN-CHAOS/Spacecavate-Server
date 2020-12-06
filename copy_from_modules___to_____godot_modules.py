from distutils.dir_util import copy_tree

fromdir = "Spacecavatemodules"
todir = "godot/modules/Spacecavatemodules"

copy_tree(fromdir,todir)
