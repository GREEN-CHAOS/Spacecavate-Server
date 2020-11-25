from distutils.dir_util import copy_tree

fromdir = "modules/OrbitCalculator"
todir = "godot/modules/OrbitCalculator"

copy_tree(todir,fromdir)


fromdir2 = "modules/GravityObject"
todir2 = "godot/modules/GravityObject"

copy_tree(todir2,fromdir2)