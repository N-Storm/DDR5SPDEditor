#ifndef DDR5SPD_H
#define DDR5SPD_H

#include <QByteArray>
#include <cstddef>
#include "ddr5spd_structs.h"
#include "xmp3.h"

class DDR5SPD
{

public:
    SPD_Struct spdStruct;

    // Raw SPD getters/setters
    const unsigned short getMinCycleTime();
    void setMinCycleTime(const unsigned short);
    const unsigned short getMaxCycleTime();
    void setMaxCycleTime(const unsigned short);

    const unsigned int getFrequency();
    const unsigned int getMT();

    void setCLSupported(int cl, bool supported);
    const bool getCLSupported(int cl);

    const unsigned short gettAA();
    void settAA(const unsigned short);
    const unsigned short gettRCD();
    void settRCD(const unsigned short);
    const unsigned short gettRP();
    void settRP(const unsigned short);
    const unsigned short gettRAS();
    void settRAS(const unsigned short);
    const unsigned short gettRC();
    void settRC(const unsigned short);
    const unsigned short gettWR();
    void settWR(const unsigned short);
    const unsigned short gettRFC1_slr();
    void settRFC1_slr(const unsigned short);
    const unsigned short gettRFC2_slr();
    void settRFC2_slr(const unsigned short);
    const unsigned short gettRFCsb_slr();
    void settRFCsb_slr(const unsigned short);
    const unsigned short gettRFC1_dlr();
    void settRFC1_dlr(const unsigned short);
    const unsigned short gettRFC2_dlr();
    void settRFC2_dlr(const unsigned short);
    const unsigned short gettRFCsb_dlr();
    void settRFCsb_dlr(const unsigned short);
    const unsigned short gettRRD_L();
    void settRRD_L(const unsigned short);
    const unsigned short gettRRD_L_lowerLimit();
    void settRRD_L_lowerLimit(const unsigned short);
    const unsigned short gettCCD_L();
    void settCCD_L(const unsigned short);
    const unsigned short gettCCD_L_lowerLimit();
    void settCCD_L_lowerLimit(const unsigned short);
    const unsigned short gettCCD_L_WR();
    void settCCD_L_WR(unsigned short);
    const unsigned short gettCCD_L_WR_lowerLimit();
    void settCCD_L_WR_lowerLimit(unsigned short);
    const unsigned short gettCCD_L_WR2();
    void settCCD_L_WR2(const unsigned short);
    const unsigned short gettCCD_L_WR2_lowerLimit();
    void settCCD_L_WR2_lowerLimit(const unsigned short);
    const unsigned short gettFAW();
    void settFAW(const unsigned short);
    const unsigned short gettFAW_lowerLimit();
    void settFAW_lowerLimit(const unsigned short);
    const unsigned short gettCCD_L_WTR();
    void settCCD_L_WTR(const unsigned short);
    const unsigned short gettCCD_L_WTR_lowerLimit();
    void settCCD_L_WTR_lowerLimit(const unsigned short);
    const unsigned short gettCCD_S_WTR();
    void settCCD_S_WTR(const unsigned short);
    const unsigned short gettCCD_S_WTR_lowerLimit();
    void settCCD_S_WTR_lowerLimit(const unsigned short);
    const unsigned short gettRTP();
    void settRTP(const unsigned short);
    const unsigned short gettRTP_lowerLimit();
    void settRTP_lowerLimit(const unsigned short);
    const unsigned short gettCCD_M();
    void settCCD_M(const unsigned short);
    const unsigned short gettCCD_M_lowerLimit();
    void settCCD_M_lowerLimit(const unsigned short);
    const unsigned short gettCCD_M_WR();
    void settCCD_M_WR(const unsigned short);
    const unsigned short gettCCD_M_WR_lowerLimit();
    void settCCD_M_WR_lowerLimit(const unsigned short);
    const unsigned short gettCCD_M_WTR();
    void settCCD_M_WTR(const unsigned short);
    const unsigned short gettCCD_M_WTR_lowerLimit();
    void settCCD_M_WTR_lowerLimit(const unsigned short);
    const unsigned short getBanksPerBankGroup();
    void setBanksPerBankGroup(const unsigned short);
    const unsigned short getBankGroups();
    void setBankGroups(const unsigned short);
    const unsigned short getColumnAddresses();
    void setColumnAddresses(const unsigned short);
    const unsigned short getRowAddresses();
    void setRowAddresses(const unsigned short);
    const unsigned short getDeviceWidth();
    void setDeviceWidth(const unsigned short);
    const char getManufacturingYear();
    void setManufacturingYear(const char);
    const char getManufacturingWeek();
    void setManufacturingWeek(const char);
    const std::string getPartNumber();
    void setPartNumber(const std::string);
    const FormFactor getFormFactor();
    void setFormFactor(const FormFactor);
    const Density getDensity();
    void setDensity(const Density);

    const unsigned short calculateJedecCRC();
    const unsigned short getCRC();
    void setCRC(const unsigned short);
    void fixCRC();

    const bool isXMPPresent();
    const bool isCRCValid();

    const char * const getPointerToStruct();
    DDR5SPD(SPD_Struct);

    XMP3_Bundle xmpBundle;
};

#endif // DDR5SPD_H
