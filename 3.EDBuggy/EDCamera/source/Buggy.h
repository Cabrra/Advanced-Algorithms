#ifndef _BUGGY_H_
#define _BUGGY_H_

#include <vector>
using namespace std;

#include "matrix4.h"

#include "EDMesh.h"

#include "EDFrame.h"

// CBuggy
//
// Loader/Control class for CBuggy objects
class CBuggy
{
	// Allow EDApp private access
	friend class EDApp;

	// The number of meshes in the CBuggy's associated model
	static unsigned int m_uiMeshCount;

	// The meshes of the associated model
	static EDMesh *m_Meshes;

	// The total number of CBuggy objects in memory 
	static unsigned int m_uiRefCount;

	// The texture ID for the model's texture
	static unsigned int m_uiTexID;

public:

	// Enumerated indices for accessing the frames/meshes of the buggy
	enum{ BODY = 0, GUN, FLWHEEL, FRWHEEL, BLWHEEL, BRWHEEL };

	// Vector of hierarchical transforms for "this" buggy's model
	// The BODY is the parent, and all other frames are it's children.
	// Any transformations applied to the parent will also be seen in it's children.
	vector< EDFrame > m_Frames;

	// Constructor
	CBuggy(void);

	// Destructor
	virtual ~CBuggy();

	// Render this buggy using "this" objects transforms
	void Render(void);
};

#endif