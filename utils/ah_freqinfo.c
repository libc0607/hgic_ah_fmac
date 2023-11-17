/**
  ******************************************************************************
  * @file    ah_freqinfo.c
  * @author  HUGE-IC Application Team
  * @version V1.0.0
  * @date    2021-06-23
  * @brief   IEEE802.11 AH Frequency defines
  ******************************************************************************
  * @attention
  *
  * <h2><center>&copy; COPYRIGHT 2021 HUGE-IC</center></h2>
  *
  ******************************************************************************
  */ 

typedef unsigned char  uint8;
typedef unsigned short uint16;
#define ARRAYSIZE(arr) (sizeof(arr) / sizeof((arr)[0]))

struct ieee80211_ah_freqinfo {
    uint8 s1g_opclass, type, max_txpower, rev;
    uint16 freqlist[16];
};

const struct ieee80211_ah_freqinfo ah_freqs[] = {
    {1, 1, 30, 0, { 9020+5*1, 9020+5*3, 9020+5*37, 9020+5*39, 9020+5*41, 9020+5*43,
                    9020+5*45, 9020+5*47, 9020+5*49, 9020+5*51}}, /*U.S., 1M, type1*/
    {1, 2, 30, 0, { 9020+5*5, 9020+5*7, 9020+5*9, 9020+5*11, 9020+5*13, 9020+5*15,
                    9020+5*17, 9020+5*19, 9020+5*21, 9020+5*23, 9020+5*25, 9020+5*27,
                    9020+5*29, 9020+5*31, 9020+5*33, 9020+5*35}}, /*U.S., 1M, type2*/
    {2, 1, 30, 0, { 9020+5*2, 9020+5*38, 9020+5*42, 9020+5*46, 9020+5*50}}, /*U.S., 2M, type1*/
    {2, 2, 30, 0, { 9020+5*6, 9020+5*10, 9020+5*14, 9020+5*18, 9020+5*22, 9020+5*26, 9020+5*30, 9020+5*34}}, /*U.S., 2M, type2*/
    {3, 1, 30, 0, { 9020+5*40, 9020+5*48}}, /*U.S., 4M, type1*/
    {3, 2, 30, 0, { 9020+5*8, 9020+5*16, 9020+5*24, 9020+5*32}}, /*U.S., 4M, type2*/
    {4, 1, 30, 0, { 9020+5*44}}, /*U.S., 8M, type1*/
    {4, 2, 30, 0, { 9020+5*12, 9020+5*28}}, /*U.S., 8M, type2*/
    {5, 2, 30, 0, { 9020+5*20}}, /*U.S., 16M, type2*/

    {6, 1, 14, 0, { 8630+5*1, 8630+5*3, 8630+5*5, 8630+5*7, 8630+5*9}}, /*Europe, 1M, type1*/
    {7, 1, 14, 0, { 8630+5*2, 8630+5*6}}, /*Europe, 2M, type1*/

    {8, 1, 23, 0, { 9165+5*1, 9165+5*3, 9165+5*5, 9165+5*7, 9165+5*9, 9165+5*11,
                    9165+5*13, 9165+5*15, 9165+5*17, 9165+5*19, 9165+5*21}}, /*Japan, 1M, type1*/

    {9, 1, 10, 0, { 7550+5*1, 7550+5*3, 7550+5*5, 7550+5*7, 7550+5*9,
                    7550+5*11, 7550+5*13, 7550+5*15, 7550+5*17, 7550+5*19,
                    7550+5*21, 7550+5*23, 7550+5*25, 7550+5*27,
                    7550+5*29, 7550+5*31}}, /*China, 1M, type1*/
    /*{10, 1, 10, 0, { 7790+5*1, 7790+5*3, 7790+5*5, 7790+5*7, 7790+5*9,
                       7790+5*11, 7790+5*13, 7790+5*15}},*/ /*China, 1M, type1*/
    {11, 2, 10, 0, { 7790+5*2, 7790+5*6, 7790+5*10, 7790+5*14}}, /*China, 2M, type2*/
    {12, 2, 10, 0, { 7790+5*4, 7790+5*12}}, /*China, 4M, type2*/
    {13, 2, 10, 0, { 7790+5*8}}, /*China, 8M, type2*/

    {14, 1, 10, 0, { 9175+5*1, 9175+5*3, 9175+5*5, 9175+5*7, 9175+5*9, 9175+5*11}}, /*Korea, 1M, type1*/
    {15, 1, 10, 0, { 9175+5*2, 9175+5*6, 9175+5*10}}, /*Korea, 2M, type1*/
    {16, 1, 10, 0, { 9175+5*8}}, /*Korea, 4M, type1*/

    {17, 1, 26, 0, { 8630+5*7, 8630+5*9, 8630+5*11, 9020+5*37, 9020+5*39, 9020+5*41, 9020+5*43, 9020+5*45}}, /*Singapore, 1M, type1*/
    {19, 1, 26, 0, { 8630+5*10, 9020+5*38, 9020+5*42}}, /*Singapore, 2M, type1*/
    {21, 1, 26, 0, { 9020+5*40}}, /*Singapore, 4M, type1*/

    {22, 1, 30, 0, { 9020+5*27, 9020+5*29, 9020+5*31, 9020+5*33, 9020+5*35}}, /*Australia, 1M, type1*/
    {22, 2, 30, 0, { 9020+5*37, 9020+5*39, 9020+5*41, 9020+5*43, 9020+5*45, 9020+5*47, 9020+5*49, 9020+5*51}}, /*Australia, 1M, type2*/
    {23, 1, 30, 0, { 9020+5*28, 9020+5*32}}, /*Australia, 2M, type1*/
    {23, 2, 30, 0, { 9020+5*38, 9020+5*42, 9020+5*46, 9020+5*50}}, /*Australia, 2M, type2*/
    {24, 1, 30, 0, { 9020+5*30}}, /*Australia, 4M, type1*/
    {24, 2, 30, 0, { 9020+5*40, 9020+5*48}}, /*Australia, 4M, type2*/
    {25, 2, 30, 0, { 9020+5*44}}, /*Australia, 8M, type2*/

    {26, 1, 36, 0, { 9020+5*27, 9020+5*29, 9020+5*31, 9020+5*33, 9020+5*35, 9020+5*37, 9020+5*39, 9020+5*41, 9020+5*43}}, /*New Zealand, 1M, type1*/
    {26, 2, 36, 0, { 9020+5*45, 9020+5*47, 9020+5*49, 9020+5*51}}, /*New Zealand, 1M, type2*/
    {27, 1, 36, 0, { 9020+5*28, 9020+5*32, 9020+5*36, 9020+5*40}}, /*New Zealand, 2M, type1*/
    {27, 2, 36, 0, { 9020+5*46, 9020+5*50}}, /*New Zealand, 2M, type2*/
    {28, 1, 36, 0, { 9020+5*30, 9020+5*38}}, /*New Zealand, 4M, type1*/
    {28, 2, 36, 0, { 9020+5*48}}, /*New Zealand, 4M, type2*/
    {29, 1, 36, 0, { 9020+5*34}}, /*New Zealand, 8M, type1*/
};

struct ieee80211_ah_freqinfo *hgic_get_ah_freqinfo(char *country_code, char bw, char type)
{
    int i = 0;
    uint8 s1g_opclass = 0;

    if(country_code == NULL)
        return NULL;
    
    if (strcmp(country_code, "US") == 0) {
        switch (bw) {
            case 1: s1g_opclass = 1; break;
            case 2: s1g_opclass = 2; break;
            case 4: s1g_opclass = 3; break;
            case 8: s1g_opclass = 4; break;
            default: break;
        };
    } else if (strcmp(country_code, "EU") == 0) {
        switch (bw) {
            case 1: s1g_opclass = 6; break;
            case 2: s1g_opclass = 7; break;
            default: break;
        };
    } else if (strcmp(country_code, "JP") == 0) {
        switch (bw) {
            case 1: s1g_opclass = 8; break;
            default: break;
        };
    } else if (strcmp(country_code, "CN") == 0) {
        switch (bw) {
            case 1: s1g_opclass = 9; break;
            case 2: s1g_opclass = 11; break;
            case 4: s1g_opclass = 12; break;
            case 8: s1g_opclass = 13; break;
            default: break;
        };
    } else if (strcmp(country_code, "KR") == 0) {
        switch (bw) {
            case 1: s1g_opclass = 14; break;
            case 2: s1g_opclass = 15; break;
            case 4: s1g_opclass = 16; break;
            default: break;
        };
    } else if (strcmp(country_code, "SG") == 0) {
        switch (bw) {
            case 1: s1g_opclass = 17; break;
            case 2: s1g_opclass = 19; break;
            case 4: s1g_opclass = 21; break;
            default: break;
        };
    } else if (strcmp(country_code, "AZ") == 0) {
        switch (bw) {
            case 1: s1g_opclass = 22; break;
            case 2: s1g_opclass = 23; break;
            case 4: s1g_opclass = 24; break;
            case 8: s1g_opclass = 25; break;
            default: break;
        };
    } else if (strcmp(country_code, "NZ") == 0) {
        switch (bw) {
            case 1: s1g_opclass = 26; break;
            case 2: s1g_opclass = 27; break;
            case 4: s1g_opclass = 28; break;
            case 8: s1g_opclass = 29; break;
            default: break;
        };
    }

    for (i = 0; s1g_opclass && i < ARRAYSIZE(ah_freqs); i++) {
        if (ah_freqs[i].s1g_opclass == s1g_opclass && ah_freqs[i].type == type){ 
            return &ah_freqs[i]; 
        }
    }
    return NULL;
}

#ifdef __linux__ /*for linux*/
void hgic_ah_set_country_region(char *country_code, char bw, char type)
{
    int i = 0;
    char *ptr = NULL;
    char cmd[128];
    struct ieee80211_ah_freqinfo *freqinfo = NULL;

    freqinfo = hgic_get_ah_freqinfo(country_code, bw, type);
    if (freqinfo == NULL) {
        printf("invalid country region: %s, bw:%d, type:%d", country_code, bw, type);
        return;
    }

    /*set freq list*/
    ptr = cmd;
    memset(cmd, 0, sizeof(cmd));
    strcpy(ptr, "iwpriv hg0 set chan_list=");
    ptr += strlen(ptr);
    for (i = 0; i < 16 && freqinfo->freqlist[i]; i++) {
        sprintf(ptr, "%d,", freqinfo->freqlist[i]);
        ptr += strlen(ptr);
    }
    if (i > 0) {
        *(ptr--) = 0;
        system(cmd);
    }

    /*set bw*/
    memset(cmd, 0, sizeof(cmd));
    sprintf(cmd, "iwpriv hg0 set bss_bw=%d", bw);
    system(cmd);

    /*set tx power*/
    memset(cmd, 0, sizeof(cmd));
    sprintf(cmd, "iwpriv hg0 set txpower=%d", freqinfo->max_txpower);
    system(cmd);
}
#else /*for rtos*/
void hgic_ah_set_country_region(char *country_code, char bw, char type)
{
    int i = 0;
    struct ieee80211_ah_freqinfo *freqinfo = NULL;

    freqinfo = hgic_get_ah_freqinfo(country_code, bw, type);
    if (freqinfo == NULL) {
        printf("invalid country region: %s, bw:%d, type:%d", country_code, bw, type);
        return;
    }

    /*set freq list*/
    while (i < 16 && freqinfo->freqlist[i]) i++;
    if (i > 0) {
        hgicf_cmd("w0", HGIC_CMD_SET_CHAN_LIST, (unsigned int)&freqinfo->freqlist, i);
    }

    /*set bw*/
    hgicf_cmd("w0", HGIC_CMD_SET_BSS_BW, bw, 0);

    /*set max power*/
    hgicf_cmd("w0", HGIC_CMD_SET_TX_POWER, freqinfo->max_txpower, 0);
}
#endif

