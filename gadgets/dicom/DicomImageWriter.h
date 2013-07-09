#ifndef DICOMIMAGEWRITER_H
#define DICOMIMAGEWRITER_H

#include "gadgetrondicom_export.h"
#include "GadgetMessageInterface.h"
#include "GadgetMRIHeaders.h"
#include "ismrmrd.h"


namespace Gadgetron {

class EXPORTGADGETSDICOM DicomImageWriter : public GadgetMessageWriter
{
 public:
  virtual int write(ACE_SOCK_Stream* sock, ACE_Message_Block* mb);

  GADGETRON_WRITER_DECLARE(DicomImageWriter);
};

} /* namespace Gadgetron */

#endif