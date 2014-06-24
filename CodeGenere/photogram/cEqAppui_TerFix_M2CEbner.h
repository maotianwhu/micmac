// File Automatically generated by eLiSe
#include "general/all.h"
#include "private/all.h"


class cEqAppui_TerFix_M2CEbner: public cElCompiledFonc
{
   public :

      cEqAppui_TerFix_M2CEbner();
      void ComputeVal();
      void ComputeValDeriv();
      void ComputeValDerivHessian();
      double * AdrVarLocFromString(const std::string &);
      void SetEbner_State_0_0(double);
      void SetScNorm(double);
      void SetXIm(double);
      void SetXTer(double);
      void SetYIm(double);
      void SetYTer(double);
      void SetZTer(double);


      static cAutoAddEntry  mTheAuto;
      static cElCompiledFonc *  Alloc();
   private :

      double mLocEbner_State_0_0;
      double mLocScNorm;
      double mLocXIm;
      double mLocXTer;
      double mLocYIm;
      double mLocYTer;
      double mLocZTer;
};
