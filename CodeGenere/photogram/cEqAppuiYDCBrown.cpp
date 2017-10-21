// File Automatically generated by eLiSe

#include "general/all.h"
#include "private/all.h"
#include "cEqAppuiYDCBrown.h"


cEqAppuiYDCBrown::cEqAppuiYDCBrown():
    cElCompiledFonc(1)
{
   AddIntRef (cIncIntervale("Intr",0,17));
   AddIntRef (cIncIntervale("Orient",17,23));
   Close(false);
}



void cEqAppuiYDCBrown::ComputeVal()
{
   double tmp0_ = mLocXIm*mLocXIm;
   double tmp1_ = mLocYIm*mLocYIm;
   double tmp2_ = tmp0_*tmp1_;
   double tmp3_ = mCompCoord[17];
   double tmp4_ = mCompCoord[19];
   double tmp5_ = cos(tmp3_);
   double tmp6_ = cos(tmp4_);
   double tmp7_ = sin(tmp3_);
   double tmp8_ = mCompCoord[18];
   double tmp9_ = sin(tmp8_);
   double tmp10_ = -(tmp9_);
   double tmp11_ = sin(tmp4_);
   double tmp12_ = -(tmp7_);
   double tmp13_ = tmp5_*tmp10_;
   double tmp14_ = mCompCoord[20];
   double tmp15_ = mLocXTer-tmp14_;
   double tmp16_ = -(tmp11_);
   double tmp17_ = tmp7_*tmp10_;
   double tmp18_ = mCompCoord[21];
   double tmp19_ = mLocYTer-tmp18_;
   double tmp20_ = cos(tmp8_);
   double tmp21_ = mCompCoord[22];
   double tmp22_ = mLocZTer-tmp21_;

  mVal[0] = ((mLocYIm+mCompCoord[10]*mLocXIm*mLocYIm+mCompCoord[11]*tmp0_+mCompCoord[12]*tmp0_*mLocYIm+mCompCoord[13]*mLocXIm*tmp1_+mCompCoord[14]*tmp2_+mCompCoord[15]*(mLocYIm/mLocDCBrown_State_0_0)*tmp2_+mCompCoord[16]*mLocYIm*(tmp0_+tmp1_))-mCompCoord[2])/mCompCoord[0]-((tmp12_*tmp6_+tmp13_*tmp11_)*(tmp15_)+(tmp5_*tmp6_+tmp17_*tmp11_)*(tmp19_)+tmp20_*tmp11_*(tmp22_))/((tmp12_*tmp16_+tmp13_*tmp6_)*(tmp15_)+(tmp5_*tmp16_+tmp17_*tmp6_)*(tmp19_)+tmp20_*tmp6_*(tmp22_));

}


void cEqAppuiYDCBrown::ComputeValDeriv()
{
   double tmp0_ = mLocXIm*mLocXIm;
   double tmp1_ = mLocYIm*mLocYIm;
   double tmp2_ = tmp0_*tmp1_;
   double tmp3_ = mCompCoord[17];
   double tmp4_ = mCompCoord[19];
   double tmp5_ = cos(tmp3_);
   double tmp6_ = cos(tmp4_);
   double tmp7_ = sin(tmp3_);
   double tmp8_ = mCompCoord[18];
   double tmp9_ = sin(tmp8_);
   double tmp10_ = -(tmp9_);
   double tmp11_ = sin(tmp4_);
   double tmp12_ = -(tmp7_);
   double tmp13_ = tmp5_*tmp10_;
   double tmp14_ = mCompCoord[20];
   double tmp15_ = mLocXTer-tmp14_;
   double tmp16_ = -(tmp11_);
   double tmp17_ = tmp7_*tmp10_;
   double tmp18_ = mCompCoord[21];
   double tmp19_ = mLocYTer-tmp18_;
   double tmp20_ = cos(tmp8_);
   double tmp21_ = mCompCoord[22];
   double tmp22_ = mLocZTer-tmp21_;
   double tmp23_ = mCompCoord[10];
   double tmp24_ = mLocXIm*mLocYIm;
   double tmp25_ = tmp23_*tmp24_;
   double tmp26_ = mLocYIm+tmp25_;
   double tmp27_ = mCompCoord[11];
   double tmp28_ = tmp27_*tmp0_;
   double tmp29_ = tmp26_+tmp28_;
   double tmp30_ = mCompCoord[12];
   double tmp31_ = tmp0_*mLocYIm;
   double tmp32_ = tmp30_*tmp31_;
   double tmp33_ = tmp29_+tmp32_;
   double tmp34_ = mCompCoord[13];
   double tmp35_ = mLocXIm*tmp1_;
   double tmp36_ = tmp34_*tmp35_;
   double tmp37_ = tmp33_+tmp36_;
   double tmp38_ = mCompCoord[14];
   double tmp39_ = tmp38_*tmp2_;
   double tmp40_ = tmp37_+tmp39_;
   double tmp41_ = mCompCoord[15];
   double tmp42_ = mLocYIm/mLocDCBrown_State_0_0;
   double tmp43_ = tmp41_*(tmp42_);
   double tmp44_ = tmp43_*tmp2_;
   double tmp45_ = tmp40_+tmp44_;
   double tmp46_ = mCompCoord[16];
   double tmp47_ = tmp46_*mLocYIm;
   double tmp48_ = tmp0_+tmp1_;
   double tmp49_ = tmp47_*(tmp48_);
   double tmp50_ = tmp45_+tmp49_;
   double tmp51_ = mCompCoord[2];
   double tmp52_ = (tmp50_)-tmp51_;
   double tmp53_ = mCompCoord[0];
   double tmp54_ = ElSquare(tmp53_);
   double tmp55_ = -(1);
   double tmp56_ = tmp55_*tmp7_;
   double tmp57_ = tmp13_*tmp11_;
   double tmp58_ = tmp12_*tmp16_;
   double tmp59_ = tmp13_*tmp6_;
   double tmp60_ = tmp58_+tmp59_;
   double tmp61_ = (tmp60_)*(tmp15_);
   double tmp62_ = tmp5_*tmp16_;
   double tmp63_ = tmp17_*tmp6_;
   double tmp64_ = tmp62_+tmp63_;
   double tmp65_ = (tmp64_)*(tmp19_);
   double tmp66_ = tmp61_+tmp65_;
   double tmp67_ = tmp20_*tmp6_;
   double tmp68_ = tmp67_*(tmp22_);
   double tmp69_ = tmp66_+tmp68_;
   double tmp70_ = tmp12_*tmp6_;
   double tmp71_ = tmp70_+tmp57_;
   double tmp72_ = (tmp71_)*(tmp15_);
   double tmp73_ = tmp5_*tmp6_;
   double tmp74_ = tmp17_*tmp11_;
   double tmp75_ = tmp73_+tmp74_;
   double tmp76_ = (tmp75_)*(tmp19_);
   double tmp77_ = tmp72_+tmp76_;
   double tmp78_ = tmp20_*tmp11_;
   double tmp79_ = tmp78_*(tmp22_);
   double tmp80_ = tmp77_+tmp79_;
   double tmp81_ = -(tmp5_);
   double tmp82_ = tmp56_*tmp10_;
   double tmp83_ = -(tmp20_);
   double tmp84_ = tmp83_*tmp5_;
   double tmp85_ = tmp83_*tmp7_;
   double tmp86_ = tmp55_*tmp9_;
   double tmp87_ = ElSquare(tmp69_);
   double tmp88_ = tmp55_*tmp11_;
   double tmp89_ = -(tmp6_);

  mVal[0] = (tmp52_)/tmp53_-(tmp80_)/(tmp69_);

  mCompDer[0][0] = -(tmp52_)/tmp54_;
  mCompDer[0][1] = 0;
  mCompDer[0][2] = (tmp55_*tmp53_)/tmp54_;
  mCompDer[0][3] = 0;
  mCompDer[0][4] = 0;
  mCompDer[0][5] = 0;
  mCompDer[0][6] = 0;
  mCompDer[0][7] = 0;
  mCompDer[0][8] = 0;
  mCompDer[0][9] = 0;
  mCompDer[0][10] = (tmp24_*tmp53_)/tmp54_;
  mCompDer[0][11] = (tmp0_*tmp53_)/tmp54_;
  mCompDer[0][12] = (tmp31_*tmp53_)/tmp54_;
  mCompDer[0][13] = (tmp35_*tmp53_)/tmp54_;
  mCompDer[0][14] = (tmp2_*tmp53_)/tmp54_;
  mCompDer[0][15] = ((tmp42_)*tmp2_*tmp53_)/tmp54_;
  mCompDer[0][16] = (mLocYIm*(tmp48_)*tmp53_)/tmp54_;
  mCompDer[0][17] = -((((tmp81_*tmp6_+tmp82_*tmp11_)*(tmp15_)+(tmp56_*tmp6_+tmp57_)*(tmp19_))*(tmp69_)-(tmp80_)*((tmp81_*tmp16_+tmp82_*tmp6_)*(tmp15_)+(tmp56_*tmp16_+tmp59_)*(tmp19_)))/tmp87_);
  mCompDer[0][18] = -(((tmp84_*tmp11_*(tmp15_)+tmp85_*tmp11_*(tmp19_)+tmp86_*tmp11_*(tmp22_))*(tmp69_)-(tmp80_)*(tmp84_*tmp6_*(tmp15_)+tmp85_*tmp6_*(tmp19_)+tmp86_*tmp6_*(tmp22_)))/tmp87_);
  mCompDer[0][19] = -((((tmp88_*tmp12_+tmp6_*tmp13_)*(tmp15_)+(tmp88_*tmp5_+tmp6_*tmp17_)*(tmp19_)+tmp6_*tmp20_*(tmp22_))*(tmp69_)-(tmp80_)*((tmp89_*tmp12_+tmp88_*tmp13_)*(tmp15_)+(tmp89_*tmp5_+tmp88_*tmp17_)*(tmp19_)+tmp88_*tmp20_*(tmp22_)))/tmp87_);
  mCompDer[0][20] = -((tmp55_*(tmp71_)*(tmp69_)-(tmp80_)*tmp55_*(tmp60_))/tmp87_);
  mCompDer[0][21] = -((tmp55_*(tmp75_)*(tmp69_)-(tmp80_)*tmp55_*(tmp64_))/tmp87_);
  mCompDer[0][22] = -((tmp55_*tmp78_*(tmp69_)-(tmp80_)*tmp55_*tmp67_)/tmp87_);
}


void cEqAppuiYDCBrown::ComputeValDerivHessian()
{
  ELISE_ASSERT(false,"Foncteur cEqAppuiYDCBrown Has no Der Sec");
}

void cEqAppuiYDCBrown::SetDCBrown_State_0_0(double aVal){ mLocDCBrown_State_0_0 = aVal;}
void cEqAppuiYDCBrown::SetXIm(double aVal){ mLocXIm = aVal;}
void cEqAppuiYDCBrown::SetXTer(double aVal){ mLocXTer = aVal;}
void cEqAppuiYDCBrown::SetYIm(double aVal){ mLocYIm = aVal;}
void cEqAppuiYDCBrown::SetYTer(double aVal){ mLocYTer = aVal;}
void cEqAppuiYDCBrown::SetZTer(double aVal){ mLocZTer = aVal;}



double * cEqAppuiYDCBrown::AdrVarLocFromString(const std::string & aName)
{
   if (aName == "DCBrown_State_0_0") return & mLocDCBrown_State_0_0;
   if (aName == "XIm") return & mLocXIm;
   if (aName == "XTer") return & mLocXTer;
   if (aName == "YIm") return & mLocYIm;
   if (aName == "YTer") return & mLocYTer;
   if (aName == "ZTer") return & mLocZTer;
   return 0;
}


cElCompiledFonc::cAutoAddEntry cEqAppuiYDCBrown::mTheAuto("cEqAppuiYDCBrown",cEqAppuiYDCBrown::Alloc);


cElCompiledFonc *  cEqAppuiYDCBrown::Alloc()
{  return new cEqAppuiYDCBrown();
}

