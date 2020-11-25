from distutils.dir_util import copy_tree

fromdir = "modules/OrbitCalculator"
todir = "godot/modules/OrbitCalculator"

copy_tree(fromdir,todir)


fromdir2 = "modules/GravityObject"
todir2 = "godot/modules/GravityObject"

copy_tree(fromdir2,todir2)