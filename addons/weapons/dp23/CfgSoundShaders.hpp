class CfgSoundShaders
{
    class CLASS(SoundShader_WeaponShot_Base);
    class CLASS(SoundShader_DP23Shot): CLASS(SoundShader_WeaponShot_Base)
    {
        samples[] =
        {
            {"\MRC\JLTS\weapons\DP23\sounds\dp23_fire.wss", 1, 1}
        };
    };
};