Advanced Algorithms
===================

#### 1. Collisions

![Collision](/Images/collisions.png)

This project was designed to detecting intersection between several different primitive types:

+ Ray to Sphere
+ Line to Triangle
+ Sphere to Plane
+ Capsule to Triangle
+ Moving Sphere Against Polyhedron

+ Controls – Collisions
	+ W/S/A/D – Movement
	+ RightMouse – MouseLook Control
	+ LeftMouse – Fire
	+ 1 – Switch to Ray/Triangle test state
	+ 2 – Switch to Ray/Sphere test state
	+ 3 – Switch to Ray/Cylinder test state
	+ 4 – Switch to Ray/Capsule test state
	+ 5 – Switch to MovingSphere/Triangle test state
	+ 6 – Switch to MovingSphere/Mesh test state
+ Controls – Reactions
	+ W/S/A/D – Movement
	+ RightMouse – MouseLook Control
	+ Space – Jump
	+ Q/E – Zoom in/out

#### 2. Bounding Volume Hierarchy

![BVH](/Images/BVH.png)

This BVH implementation uses templating and the [Curiously Recurring Template Pattern](http://en.wikipedia.org/wiki/Curiously_recurring_template_pattern). This allows for creation of BVHs with leaves containing any data type, as long as the derived leaf class supports construction, building, and splitting.

 TEST I: 
 This test tests an AABB against the bounds of the leaves of the BVH and draws the overlapped bounds. No traversal of the BVH structure is done in this test.
 
 TEST II: 
 This test tests an AABB against the BVH through traversal, rendering all collided node bounds and the triangle data in any overlapped leaves.

 + Controls
	+ MouseLook camera is enabled by holding down the right mouse button.
	+ Move the camera using the arrow keys.
	+ Move the test object in the scene using W,A,S,D,Q,E keys. 
	+ Reset test object with R key.
	+ Switch between the different tests using 1&2 keys.

#### 3. Buggy

![Buggy](/Images/buggyPick.png)

This lab trained in the implementation of various matrix behaviors, weapon behaviors, and collision detection and response algorithms.

1)Terrain following algorithm on the Buggy’s body using the line-to-triangle intersection test. 
2)Line-to-triangle intersection test with the mortar and the terrain.
3)Line-to-triangle test with the crosshair and the terrain.
4)Ground clamping on the Buggy’s body using the line-to-triangle intersection test and the ground clamping algorithm.
5)Translate the mortar by (-0.001f * fTime) units on the world-Y for gravity (Mortar's lifecycle is 60 seconds).
6)For all the targets in the world, a sphere to sphere intersection test is performed with the sphere of the bullet (bullet lifecycle is 30 seconds).
7)If the current camera mode is not MOUSE_LOOK and the right mouse button is down, perform the mouse-look algorithm.
8)If the buggy moves forward or backward, perform the turn-to algorithm on the buggy’s body.

+ Controls
	+ PageUp/PageDown – Cycle through cameras
	+ W – Move the buggy forward
	+ S – Move the buggy backward
	+ Right Mouse Button + Mouse Move – Rotate the camera or the buggy’s gun.
	+ Left Mouse Button – Fire a bullet from the gun
	+ Space Bar – Fire a mortar from the gun

#### 4. Picking

![Picking](/Images/picking.png)

This implements the triangle picking algorithm using a line segment to triangle test.

+ Controls:
	+ Right Mouse Button - Control the camera with the mouse-look and WASD
	+ Left Mouse Button - Pick a triangle from the terrain
	
#### 5. Frustum Culling

![Frustum Culling](/Images/frustum.png)
	
Implementation of frustum culling and various basic collision tests.

+ Controls
	+ MouseLook camera is enabled by holding down the right mouse button.
	+ Move the camera using the arrow keys.
	+ Move the test object in the scene using W,A,S,D,Q,E keys. 
	+ Reset test object with R key.
	+ Switch between the different tests using 1-9 keys.

#### 6. KdTrees

![KD Tree](/Images/KDTree.png)

Implementation of a KdTree for spatial partitioning.

KD trees are a useful data structure for several applications, such as searches involving a multidimensional search key.
Read more here [Kd Trees](https://en.wikipedia.org/wiki/K-d_tree).

TEST I
This test draws the results of testing the frustum object directly against all KdTree leaf bounds, without traversing the tree.

TEST II
This test draws the results of testing the frustum object against the KdTree leaf bounds by traversing the tree. Results should be more precise than TEST I.

TEST III
This test draws the results of testing the frustum object against the KdTree leaf bounds by traversing the tree, and draws the results of testing the frustum against the objects contained in the tested leaves.

TEST IV
This test draws the results of testing the frustum object against the SceneObjects in the KdTree by traverse the tree.

TEST V
This test draws the result of testing a SceneObject for collision against the other SceneObjects in the KdTree by traversing through the tree.

+ Controls
	+ MouseLook camera is enabled by holding down the right mouse button.
	+ Move the camera using the arrow keys.
	+ Move the test object in the scene using W,A,S,D keys. 
	+ Reset test object with R key.
	+ Switch between the different tests using 1-5 keys.
	
#### 7. Sphere to Triangle

![Sphere To Triangle](/Images/sphereTriangle.png)

This was one of the first labs from Engine Development 3. All the guidance comments are in the EDApp.cpp file. As a final output we should have highlighted the colliding triangles in red.

+ Controls:
	+ Right Mouse Button - Control the camera with the mouse-look and WASD
	+ Arrow keys - move ball	

## Built With

* [Visual Studio](https://visualstudio.microsoft.com/) 					- For C++ development

## Contributing

Please read [CONTRIBUTING.md](https://github.com/Cabrra/Contributing-template/blob/master/Contributing-template.md) for details on the code of conduct, and the process for submitting pull requests to me.

## Authors

* **Jonathan Burnside** - [Burnsidious](https://github.com/Burnsidious)
* **Jagoba "Jake" Marcos** - [Cabrra](https://github.com/Cabrra)

## License

This project is licensed under the MIT license - see the [LICENSE](LICENSE) file for details

## Acknowledgments

* Full Sail University - Game Development Department
* Matthew Norris - Course Director
