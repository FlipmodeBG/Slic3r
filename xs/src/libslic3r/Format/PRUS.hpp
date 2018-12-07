#if defined(SLIC3R_PRUS) && ! defined(slic3r_Format_PRUS_hpp_)
#define slic3r_Format_PRUS_hpp_

namespace Slic3r {

class TriangleMesh;
class Model;

// Load a PrusaControl project file into a provided model.
extern bool load_prus(const char *path, Model *model);

}; // namespace Slic3r

#endif /* SLIC3R_PRUS && ! defined(slic3r_Format_PRUS_hpp_) */