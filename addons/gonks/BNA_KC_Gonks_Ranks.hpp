class GVAR(ranks) {
    class Infantry {
        class CR {
            // See initSettings.inc.sqf for meanings
            helmetP0 = QCLASS(Helmet_phase1Geo_Enlisted);
            helmetP1 = QCLASS(Helmet_Phase1_CR);
            helmetP2 = QCLASS(Helmet_Phase2_CR);
            helmetP3 = QCLASS(Helmet_Phase2_Base);

            uniformP0 = QCLASS(Uniform_phase1Geo_Enlisted);
            uniformP1 = QCLASS(Uniform_CR);
            uniformP2 = QCLASS(Uniform_CR);
            uniformP3 = QCLASS(Uniform_Base);

            vestP0 = QCLASS(Vest_Basic);
            vestP1 = QCLASS(Vest_Basic);
            vestP2 = QCLASS(Vest_Basic);
            vestP3 = QCLASS(Vest_Basic);

            nvgP0 = QCLASS(NVG_Chip);
            nvgP1 = QCLASS(NVG_Chip);
            nvgP2 = QCLASS(NVG_Chip);
            nvgP3 = QCLASS(NVG_Chip);
        };
        class CT: CR {
            helmetP1 = QCLASS(Helmet_Phase1_CT);
            helmetP2 = QCLASS(Helmet_Phase2_CT);
            uniformP1 = QCLASS(Uniform_CT);
            uniformP2 = QCLASS(Uniform_CT);
        };
        class SCT: CR {
            helmetP1 = QCLASS(Helmet_Phase1_SCT);
            helmetP2 = QCLASS(Helmet_Phase2_SCT);
            uniformP1 = QCLASS(Uniform_SCT);
            uniformP2 = QCLASS(Uniform_SCT);
        };
        class VCT: CR {
            helmetP1 = QCLASS(Helmet_Phase1_VCT);
            helmetP2 = QCLASS(Helmet_Phase2_VCT);
            uniformP1 = QCLASS(Uniform_VCT);
            uniformP2 = QCLASS(Uniform_VCT);
        };
        class CLC: CR {
            helmetP1 = QCLASS(Helmet_Phase1_CLC);
            helmetP2 = QCLASS(Helmet_Phase2_CLC);

            uniformP1 = QCLASS(Uniform_CLC);
            uniformP2 = QCLASS(Uniform_CLC);

            vestP1 = QCLASS(Vest_CLC);
            vestP2 = QCLASS(Vest_CLC);
        };
        class CPL: CR {
            helmetP1 = QCLASS(Helmet_Phase1_CPL);
            helmetP2 = QCLASS(Helmet_Phase2_CPL);

            uniformP1 = QCLASS(Uniform_CPL);
            uniformP2 = QCLASS(Uniform_CPL);

            vestP1 = QCLASS(Vest_CPL);
            vestP2 = QCLASS(Vest_CPL);
        };
        class CS: CR {
            helmetP1 = QCLASS(Helmet_Phase1_CS);
            helmetP2 = QCLASS(Helmet_Phase2_CS);

            uniformP1 = QCLASS(Uniform_CS);
            uniformP2 = QCLASS(Uniform_CS);

            vestP1 = QCLASS(Vest_CS);
            vestP2 = QCLASS(Vest_CS);

            nvgP1 = QCLASS(NVG_phase1_Rangefinder);
            nvgP2 = QCLASS(NVG_phase2_Rangefinder);
        };
        class CSS: CS {
            helmetP1 = QCLASS(Helmet_Phase1_CSS);
            helmetP2 = QCLASS(Helmet_Phase2_CSS);

            uniformP1 = QCLASS(Uniform_CSS);
            uniformP2 = QCLASS(Uniform_CSS);

            vestP1 = QCLASS(Vest_CSS);
            vestP2 = QCLASS(Vest_CSS);
        };
        class CSFC: CS {
            helmetP1 = QCLASS(Helmet_Phase1_CSFC);
            helmetP2 = QCLASS(Helmet_Phase2_CSFC);

            uniformP1 = QCLASS(Uniform_CSFC);
            uniformP2 = QCLASS(Uniform_CSFC);

            vestP1 = QCLASS(Vest_CSFC);
            vestP2 = QCLASS(Vest_CSFC);
        };
        class CMS: CS {
            helmetP1 = QCLASS(Helmet_Phase1_CMS);
            helmetP2 = QCLASS(Helmet_Phase2_CMS);

            uniformP1 = QCLASS(Uniform_CMS);
            uniformP2 = QCLASS(Uniform_CMS);

            vestP1 = QCLASS(Vest_CMS);
            vestP2 = QCLASS(Vest_CMS);
        };
        class CSM: CS {
            helmetP1 = QCLASS(Helmet_Phase1_CSM);
            helmetP2 = QCLASS(Helmet_Phase2_CSM);

            uniformP1 = QCLASS(Uniform_CSM);
            uniformP2 = QCLASS(Uniform_CSM);

            vestP1 = QCLASS(Vest_CSM);
            vestP2 = QCLASS(Vest_CSM);
        };
        class WO: CR {
            helmetP1 = QCLASS(Helmet_Phase1_WO);
            helmetP2 = QCLASS(Helmet_Phase2_WO);

            uniformP1 = QCLASS(Uniform_WO);
            uniformP2 = QCLASS(Uniform_WO);

            vestP1 = QCLASS(Vest_WO);
            vestP2 = QCLASS(Vest_WO);

            nvgP1 = QCLASS(NVG_phase1_Officer);
            nvgP2 = QCLASS(NVG_phase2_Officer);
        };
        class WO2: WO {
            helmetP1 = QCLASS(Helmet_Phase1_WO2);
            helmetP2 = QCLASS(Helmet_Phase2_WO2);

            uniformP1 = QCLASS(Uniform_WO2);
            uniformP2 = QCLASS(Uniform_WO2);
        };
        class WO3: WO {
            helmetP1 = QCLASS(Helmet_Phase1_WO3);
            helmetP2 = QCLASS(Helmet_Phase2_WO3);

            uniformP1 = QCLASS(Uniform_WO3);
            uniformP2 = QCLASS(Uniform_WO3);
        };
        class LT: WO {
            helmetP1 = QCLASS(Helmet_Phase1_LT);
            helmetP2 = QCLASS(Helmet_Phase2_LT);

            uniformP1 = QCLASS(Uniform_LT);
            uniformP2 = QCLASS(Uniform_LT);

            vestP1 = QCLASS(Vest_Officer);
            vestP2 = QCLASS(Vest_Officer);
        };
        class 1LT: WO {
            helmetP1 = QCLASS(Helmet_Phase1_1LT);
            helmetP2 = QCLASS(Helmet_Phase2_1LT);

            uniformP1 = QCLASS(Uniform_1LT);
            uniformP2 = QCLASS(Uniform_1LT);
        };
        class CAP: WO {
            helmetP1 = QCLASS(Helmet_Phase1_CAP);
            helmetP2 = QCLASS(Helmet_Phase2_CAP);

            uniformP1 = QCLASS(Uniform_CAP);
            uniformP2 = QCLASS(Uniform_CAP);
        };
        class MAJ: WO {
            helmetP1 = QCLASS(Helmet_Phase1_MAJ);
            helmetP2 = QCLASS(Helmet_Phase2_MAJ);

            uniformP1 = QCLASS(Uniform_MAJ);
            uniformP2 = QCLASS(Uniform_MAJ);

            vestP1 = QCLASS(Vest_Commander);
            vestP2 = QCLASS(Vest_Commander);
        };
        class COM: WO {
            helmetP1 = QCLASS(Helmet_Phase1_COM);
            helmetP2 = QCLASS(Helmet_Phase2_COM);

            uniformP1 = QCLASS(Uniform_COM);
            uniformP2 = QCLASS(Uniform_COM);

            vestP1 = QCLASS(Vest_Commander);
            vestP2 = QCLASS(Vest_Commander);
        };
    };
};