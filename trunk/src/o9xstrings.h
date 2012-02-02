#ifndef o9xstrings_h
#define o9xstrings_h

#if defined(TRANSLATIONS_FR)
#include "translations/fr.h"
#elif defined(TRANSLATIONS_IT)
#include "translations/it.h"
#else
#include "translations/en.h"
#endif

#define PSIZE(x) ( sizeof(x) - 1 )

// The non-0-terminated-strings

extern const pm_char STR_OPEN9X[];

#define OFS_OFFON      0
#define OFS_MMMINV     (OFS_OFFON + PSIZE(TR_OFFON))
#define OFS_NCHANNELS  (OFS_MMMINV + PSIZE(TR_MMMINV))
#define OFS_VBEEPER    (OFS_NCHANNELS + PSIZE(TR_NCHANNELS))
#define OFS_ADCFILTER  (OFS_VBEEPER + PSIZE(TR_VBEEPER))
#define OFS_WARNSW     (OFS_ADCFILTER + PSIZE(TR_ADCFILTER))
#define OFS_TRNMODE    (OFS_WARNSW + PSIZE(TR_WARNSW))
#define OFS_TRNCHN     (OFS_TRNMODE + PSIZE(TR_TRNMODE))
#define OFS_VTRIMINC   (OFS_TRNCHN + PSIZE(TR_TRNCHN))
#define OFS_RETA123    (OFS_VTRIMINC + PSIZE(TR_VTRIMINC))
#define OFS_VPROTOS    (OFS_RETA123 + PSIZE(TR_RETA123))
#define OFS_POSNEG     (OFS_VPROTOS + PSIZE(TR_VPROTOS))
#define OFS_VCURVEFUNC (OFS_POSNEG + PSIZE(TR_POSNEG))
#define OFS_CURVMODES  (OFS_VCURVEFUNC + PSIZE(TR_VCURVEFUNC))
#define OFS_EXPLABELS  (OFS_CURVMODES + PSIZE(TR_CURVMODES))
#define OFS_VMLTPX     (OFS_EXPLABELS + PSIZE(TR_EXPLABELS))
#define OFS_VMLTPX2    (OFS_VMLTPX + PSIZE(TR_VMLTPX))
#define OFS_VMIXTRIMS  (OFS_VMLTPX2 + PSIZE(TR_VMLTPX2))
#define OFS_VCSWFUNC   (OFS_VMIXTRIMS + PSIZE(TR_VMIXTRIMS))
#define OFS_VFSWFUNC   (OFS_VCSWFUNC + PSIZE(TR_VCSWFUNC))
#ifdef FRSKY
#define OFS_VTELEMUNIT (OFS_VFSWFUNC + PSIZE(TR_VFSWFUNC))
#define OFS_VALARM     (OFS_VTELEMUNIT + PSIZE(TR_VTELEMUNIT))
#define OFS_VALARMFN   (OFS_VALARM + PSIZE(TR_VALARM))
#define OFS_VTELPROTO  (OFS_VALARMFN + PSIZE(TR_VALARMFN))
#define OFS_TELEMCHNS  (OFS_VTELPROTO + PSIZE(TR_VTELPROTO))
#define OFS_ENDTELEM   (OFS_TELEMCHNS + PSIZE(TR_TELEMCHNS))
#else
#define OFS_ENDTELEM   (OFS_VFSWFUNC + PSIZE(TR_VFSWFUNC))
#endif
#ifdef TEMPLATES
#define OFS_VTEMPLATES (OFS_ENDTELEM)
#define OFS_ENDTPLS    (OFS_VTEMPLATES + PSIZE(TR_VTEMPLATES))
#else
#define OFS_ENDTPLS    (OFS_ENDTELEM)
#endif
#ifdef HELI
#define OFS_VSWASHTYPE (OFS_ENDTPLS)
#define OFS_ENDHELI    (OFS_VSWASHTYPE + PSIZE(TR_VSWASHTYPE))
#else
#define OFS_ENDHELI    (OFS_ENDTPLS)
#endif
#define OFS_VKEYS      (OFS_ENDHELI)
#define OFS_VSWITCHES  (OFS_VKEYS + PSIZE(TR_VKEYS))
#define OFS_VSRCRAW    (OFS_VSWITCHES + PSIZE(TR_VSWITCHES))
#define OFS_VTMRMODES  (OFS_VSRCRAW + PSIZE(TR_VSRCRAW))
#if defined(DSM2)
#define OFS_DSM2MODE   (OFS_VTMRMODES + PSIZE(TR_VTMRMODES))
#define OFS_ENDDSM2    (OFS_DSM2MODE + PSIZE(TR_DSM2MODE))
#else
#define OFS_ENDDSM2    (OFS_VTMRMODES + PSIZE(TR_VTMRMODES))
#endif
#if defined(PCBV4)
#define OFS_RE1RE2     (OFS_ENDDSM2)
#define OFS_DATETIME   (OFS_RE1RE2 + PSIZE(TR_RE1RE2))
#endif

#define STR_OFFON      (STR_OPEN9X + OFS_OFFON)
#define STR_ONOFF      (STR_OPEN9X + OFS_OFFON + LEN_OFFON)
#define STR_MMMINV     (STR_OPEN9X + OFS_MMMINV)
#define STR_NCHANNELS  (STR_OPEN9X + OFS_NCHANNELS)
#define STR_VBEEPER    (STR_OPEN9X + OFS_VBEEPER)
#define STR_ADCFILTER  (STR_OPEN9X + OFS_ADCFILTER)
#define STR_WARNSW     (STR_OPEN9X + OFS_WARNSW)
#define STR_TRNMODE    (STR_OPEN9X + OFS_TRNMODE)
#define STR_TRNCHN     (STR_OPEN9X + OFS_TRNCHN)
#define STR_VTRIMINC   (STR_OPEN9X + OFS_VTRIMINC)
#define STR_RETA123    (STR_OPEN9X + OFS_RETA123)
#define STR_VPROTOS    (STR_OPEN9X + OFS_VPROTOS)
#define STR_POSNEG     (STR_OPEN9X + OFS_POSNEG)
#define STR_VCURVEFUNC (STR_OPEN9X + OFS_VCURVEFUNC)
#define STR_VWHEN      STR_VCURVEFUNC
#define LEN_VWHEN      LEN_VCURVEFUNC
#define STR_CURVMODES  (STR_OPEN9X + OFS_CURVMODES)
#define STR_EXPLABELS  (STR_OPEN9X + OFS_EXPLABELS)
#define STR_VMLTPX     (STR_OPEN9X + OFS_VMLTPX)
#define STR_VMLTPX2    (STR_OPEN9X + OFS_VMLTPX2)
#define STR_VMIXTRIMS  (STR_OPEN9X + OFS_VMIXTRIMS)
#define STR_VCSWFUNC   (STR_OPEN9X + OFS_VCSWFUNC)
#define STR_VFSWFUNC   (STR_OPEN9X + OFS_VFSWFUNC)

#ifdef FRSKY
#define STR_VTELEMUNIT (STR_OPEN9X + OFS_VTELEMUNIT)
#define STR_VALARM     (STR_OPEN9X + OFS_VALARM)
#define STR_VALARMFN   (STR_OPEN9X + OFS_VALARMFN)
#define STR_VTELPROTO  (STR_OPEN9X + OFS_VTELPROTO)
#define STR_TELEMCHNS  (STR_OPEN9X + OFS_TELEMCHNS)
#endif

#ifdef TEMPLATES
#define STR_VTEMPLATES (STR_OPEN9X + OFS_VTEMPLATES)
#endif

#ifdef HELI
#define STR_VSWASHTYPE (STR_OPEN9X + OFS_VSWASHTYPE)
#endif

#define STR_VKEYS      (STR_OPEN9X + OFS_VKEYS)
#define STR_VSWITCHES  (STR_OPEN9X + OFS_VSWITCHES)
#define STR_VSRCRAW    (STR_OPEN9X + OFS_VSRCRAW)
#define STR_VTMRMODES  (STR_OPEN9X + OFS_VTMRMODES)

#if defined(DSM2)
#define STR_DSM2MODE   (STR_OPEN9X + OFS_DSM2MODE)
#endif

#if defined(PCBV4)
#define STR_RE1RE2     (STR_OPEN9X + OFS_RE1RE2)
#define STR_DATETIME   (STR_OPEN9X + OFS_DATETIME)
#endif

// The 0-terminated-strings

extern const pm_char STR_POPUPS[];
extern const pm_char STR_MENUWHENDONE[];
extern const pm_char STR_FREE[];
#define LEN_FREE PSIZE(TR_FREE)
extern const pm_char STR_DELETEMODEL[];
extern const pm_char STR_COPYINGMODEL[];
extern const pm_char STR_MOVINGMODEL[];
extern const pm_char STR_LOADINGMODEL[];
extern const pm_char STR_NAME[];
extern const pm_char STR_TIMER[];
extern const pm_char STR_ELIMITS[];
extern const pm_char STR_ETRIMS[];
extern const pm_char STR_TRIMINC[];
extern const pm_char STR_TTRACE[];
extern const pm_char STR_TTRIM[];
extern const pm_char STR_BEEPCTR[];
extern const pm_char STR_PROTO[];
extern const pm_char STR_PPMFRAME[];
extern const pm_char STR_MS[];
extern const pm_char STR_SWITCH[];
extern const pm_char STR_TRIMS[];
extern const pm_char STR_FADEIN[];
extern const pm_char STR_FADEOUT[];
extern const pm_char STR_DEFAULT[];
extern const pm_char STR_CHECKTRIMS[];
extern const pm_char STR_SWASHTYPE[];
extern const pm_char STR_COLLECTIVE[];
extern const pm_char STR_SWASHRING[];
extern const pm_char STR_ELEDIRECTION[];
extern const pm_char STR_AILDIRECTION[];
extern const pm_char STR_COLDIRECTION[];
extern const pm_char STR_MODE[];
extern const pm_char STR_NOFREEEXPO[];
extern const pm_char STR_NOFREEMIXER[];
extern const pm_char STR_INSERTMIX[];
extern const pm_char STR_EDITMIX[];
extern const pm_char STR_SOURCE[];
extern const pm_char STR_WEIGHT[];
extern const pm_char STR_OFFSET[];
extern const pm_char STR_TRIM[];
extern const pm_char STR_CURVES[];
extern const pm_char STR_FPHASE[];
extern const pm_char STR_WARNING[];
extern const pm_char STR_OFF[];
extern const pm_char STR_MULTPX[];
extern const pm_char STR_DELAYDOWN[];
extern const pm_char STR_DELAYUP[];
extern const pm_char STR_SLOWDOWN[];
extern const pm_char STR_SLOWUP[];
extern const pm_char STR_DREXPO[];
extern const pm_char STR_MIXER[];
extern const pm_char STR_COPYTRIMMENU[];
extern const pm_char STR_CV[];
extern const pm_char STR_SW[];
extern const pm_char STR_ACHANNEL[];
extern const pm_char STR_MAX[];
extern const pm_char STR_CALIB[];
extern const pm_char STR_BAR[];
extern const pm_char STR_ALARM[];
extern const pm_char STR_USRPROTO[];
extern const pm_char STR_CLEARMIXMENU[];
extern const pm_char STR_BEEPER[];
extern const pm_char STR_CONTRAST[];
extern const pm_char STR_BATTERYWARNING[];
extern const pm_char STR_INACTIVITYALARM[];
extern const pm_char STR_FILTERADC[];
extern const pm_char STR_THROTTLEREVERSE[];
extern const pm_char STR_MINUTEBEEP[];
extern const pm_char STR_BEEPCOUNTDOWN[];
extern const pm_char STR_FLASHONBEEP[];
extern const pm_char STR_LIGHTSWITCH[];
extern const pm_char STR_LIGHTOFFAFTER[];
extern const pm_char STR_SPLASHSCREEN[];
extern const pm_char STR_THROTTLEWARNING[];
extern const pm_char STR_SWITCHWARNING[];
extern const pm_char STR_MEMORYWARNING[];
extern const pm_char STR_ALARMWARNING[];
extern const pm_char STR_NODATAALARM[];
extern const pm_char STR_RXCHANNELORD[];
extern const pm_char STR_MODE2[];
extern const pm_char STR_SLAVE[];
extern const pm_char STR_MODESRC[];
extern const pm_char STR_MULTIPLIER[];
extern const pm_char STR_CAL[];
extern const pm_char STR_EEPROMV[];
extern const pm_char STR_VTRIM[];
extern const pm_char STR_BG[];
extern const pm_char STR_MENUTOSTART[];
extern const pm_char STR_SETMIDPOINT[];
extern const pm_char STR_MOVESTICKSPOTS[];
extern const pm_char STR_ALT[];
extern const pm_char STR_RXBATT[];
extern const pm_char STR_RX[];
extern const pm_char STR_TX[];
extern const pm_char STR_HDG[];
extern const pm_char STR_SPD[];
extern const pm_char STR_TEMP1[];
extern const pm_char STR_TEMP2[];
extern const pm_char STR_RPM[];
extern const pm_char STR_FUEL[];
extern const pm_char STR_VOLTS[];
extern const pm_char STR_ACCEL[];
extern const pm_char STR_TELE[];
extern const pm_char STR_RSSI[];
extern const pm_char STR_NODATA[];
extern const pm_char STR_TM1[];
extern const pm_char STR_TM2[];
extern const pm_char STR_THR[];
extern const pm_char STR_TH[];
extern const pm_char STR_TOT[];
extern const pm_char STR_TMR1LATMAXUS[];
extern const pm_char STR_TMR1LATMINUS[];
extern const pm_char STR_TMR1JITTERUS[];
extern const pm_char STR_TMAINMAXMS[];
extern const pm_char STR_T10MSUS[];
extern const pm_char STR_FREESTACKMINB[];
extern const pm_char STR_MENUTORESET[];
extern const pm_char STR_PPM[];
extern const pm_char STR_CH[];
extern const pm_char STR_TMR[];
extern const pm_char STR_MODEL[];
extern const pm_char STR_FP[];
extern const pm_char STR_EEPROMLOWMEM[];
extern const pm_char STR_ALERT[];
extern const pm_char STR_PRESSANYKEYTOSKIP[];
extern const pm_char STR_THROTTLENOTIDLE[];
extern const pm_char STR_RESETTHROTTLE[];
extern const pm_char STR_ALARMSDISABLED[];
extern const pm_char STR_SWITCHESNOTOFF[];
extern const pm_char STR_PLEASERESETTHEM[];
extern const pm_char STR_MESSAGE[];
extern const pm_char STR_PRESSANYKEY[];
#define LEN_PRESSANYKEY PSIZE(TR_PRESSANYKEY)
extern const pm_char STR_BADEEPROMDATA[];
extern const pm_char STR_EEPROMFORMATTING[];
extern const pm_char STR_EEPROMOVERFLOW[];
extern const pm_char STR_MENUSERROR[];
extern const pm_char STR_MENURADIOSETUP[];
extern const pm_char STR_MENUDATEANDTIME[];
extern const pm_char STR_MENUTRAINER[];
extern const pm_char STR_MENUVERSION[];
extern const pm_char STR_MENUDIAG[];
extern const pm_char STR_MENUANA[];
extern const pm_char STR_MENUCALIBRATION[];
extern const pm_char STR_MENUMODELSEL[];
extern const pm_char STR_MENUSETUP[];
extern const pm_char STR_MENUFLIGHTPHASE[];
extern const pm_char STR_MENUFLIGHTPHASES[];
extern const pm_char STR_MENUHELISETUP[];
extern const pm_char STR_MENUDREXPO[];
extern const pm_char STR_MENULIMITS[];
extern const pm_char STR_MENUCURVES[];
extern const pm_char STR_MENUCURVE[];
extern const pm_char STR_MENUCUSTOMSWITCHES[];
extern const pm_char STR_MENUFUNCSWITCHES[];
extern const pm_char STR_MENUSAFETYSWITCHES[];
extern const pm_char STR_MENUTELEMETRY[];
extern const pm_char STR_MENUTEMPLATES[];
extern const pm_char STR_MENUSTAT[];
extern const pm_char STR_MENUDEBUG[];
extern const pm_char STR_RXNUM[];
extern const pm_char STR_SYNCMENU[];
extern const pm_char STR_HAPTICSTRENGTH[];
extern const pm_char STR_SPKRPITCH[];

#endif
