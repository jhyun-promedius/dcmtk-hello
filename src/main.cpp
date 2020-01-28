#include <cstdlib>
#include "dcmtk/dcmdata/dctk.h"          /* for various dcmdata headers */
#include "dcmtk/dcmdata/dcrledrg.h"      /* for DcmRLEDecoderRegistration */

int main() {
  DcmRLEDecoderRegistration::registerCodecs();

  DcmFileFormat *dfile = new DcmFileFormat();
  delete dfile;

  DcmRLEDecoderRegistration::cleanup();

  exit(EXIT_SUCCESS);
}
