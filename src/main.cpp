#include <cstdlib>
#include "dcmtk/dcmdata/dctk.h"          /* for various dcmdata headers */

int main() {
  DcmRLEDecoderRegistration::registerCodecs();

  DcmFileFormat *dfile = new DcmFileFormat();
  delete dfile;

  DcmRLEDecoderRegistration::cleanup();

  exit(EXIT_SUCCESS);
}
