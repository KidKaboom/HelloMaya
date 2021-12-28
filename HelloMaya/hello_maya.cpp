#include <maya\MSimple.h>
#include <maya\MGlobal.h>


DeclareSimpleCommand(HelloMaya, "Justin Tirado", "1.0")


MStatus HelloMaya::doIt(const MArgList& args) {
    MGlobal::displayInfo("Hello Maya!");
    return MS::kSuccess;
}