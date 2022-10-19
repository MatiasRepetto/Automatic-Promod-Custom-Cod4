#include "../include/utils.h"

void utils::writefile(varTxt_t* varTxto){
    const int arrayTam = 170;
    std::string arrayTxt[arrayTam] = {
        "main()",
        "{",
        R"(     setDvar( "scr_sd_bombtimer", 45 );)", 
        R"(     setDvar( "scr_sd_defusetime", 7 );)", 
        R"(     setDvar( "scr_sd_multibomb", 0 );)", 
        R"(     setDvar( "scr_sd_numlives", 1 );)", 
        R"(     setDvar( "scr_sd_planttime", 5 );)", 
        R"(     setDvar( "scr_sd_playerrespawndelay", 0 );)", 
        R"(     setDvar( "scr_sd_roundlimit", 20 );)", 
        R"(     setDvar( "scr_sd_roundswitch", 10 );)", 
        R"(     setDvar( "scr_sd_scorelimit", 0 );)", 
        R"(     setDvar( "scr_sd_timelimit", 1.75 );)", 
        R"(     setDvar( "scr_sd_waverespawndelay", 0 );)", 
        R"(     setDvar( "scr_dom_numlives", 0 );)", 
        R"(     setDvar( "scr_dom_playerrespawndelay", 7 );)", 
        R"(     setDvar( "scr_dom_roundlimit", 2 );)", 
        R"(     setDvar( "scr_dom_roundswitch", 1 );)", 
        R"(     setDvar( "scr_dom_scorelimit", 0 );)", 
        R"(     setDvar( "scr_dom_timelimit", 15 );)", 
        R"(     setDvar( "scr_dom_waverespawndelay", 0 );)", 
        R"(     setDvar( "koth_autodestroytime", 120 );)", 
        R"(     setDvar( "koth_capturetime", 20 );)", 
        R"(     setDvar( "koth_delayPlayer", 0 );)", 
        R"(     setDvar( "koth_destroytime", 10 );)", 
        R"(     setDvar( "koth_kothmode", 0 );)", 
        R"(     setDvar( "koth_spawnDelay", 45 );)", 
        R"(     setDvar( "koth_spawntime", 10 );)", 
        R"(     setDvar( "scr_koth_numlives", 0 );)", 
        R"(     setDvar( "scr_koth_playerrespawndelay", 0 );)", 
        R"(     setDvar( "scr_koth_roundlimit", 2 );)", 
        R"(     setDvar( "scr_koth_roundswitch", 1 );)", 
        R"(     setDvar( "scr_koth_scorelimit", 0 );)", 
        R"(     setDvar( "scr_koth_timelimit", 15 );)", 
        R"(     setDvar( "scr_koth_waverespawndelay", 0 );)", 
        R"(     setDvar( "scr_sab_bombtimer", 45 );)", 
        R"(     setDvar( "scr_sab_defusetime", 5 );)", 
        R"(     setDvar( "scr_sab_hotpotato", 0 );)", 
        R"(     setDvar( "scr_sab_numlives", 0 );)", 
        R"(     setDvar( "scr_sab_planttime", 5 );)", 
        R"(     setDvar( "scr_sab_playerrespawndelay", 7 );)", 
        R"(     setDvar( "scr_sab_roundlimit", 4 );)", 
        R"(     setDvar( "scr_sab_roundswitch", 2 );)", 
        R"(     setDvar( "scr_sab_scorelimit", 0 );)", 
        R"(     setDvar( "scr_sab_timelimit", 10 );)", 
        R"(     setDvar( "scr_sab_waverespawndelay", 0 );)", 
        R"(     setDvar( "scr_war_numlives", 0 );)", 
        R"(     setDvar( "scr_war_playerrespawndelay", 0 );)", 
        R"(     setDvar( "scr_war_roundlimit", 2 );)", 
        "     setDvar( \"scr_war_scorelimit\", " + std::to_string(varTxto->tdmScoreLimit) + " );", 
        R"(     setDvar( "scr_war_roundswitch", 1 );)", 
        "     setDvar( \"scr_war_timelimit\", " + std::to_string(varTxto->tdmTimeLimit) + " );", 
        R"(     setDvar( "scr_war_waverespawndelay", 0 );)", 
        R"(     setDvar( "scr_dm_numlives", 0 );)", 
        "     setDvar( \"scr_dm_playerrespawndelay\", " + std::to_string(varTxto->dmSpawnDelay) + " );", 
        R"(     setDvar( "scr_dm_roundlimit", 1 );)", 
        "     setDvar( \"scr_dm_scorelimit\", " + std::to_string(varTxto->dmScoreLimit) + " );", 
        "     setDvar( \"scr_dm_timelimit\", " + std::to_string(varTxto->dmTimeLimit) + " );", 
        R"(     setDvar( "scr_dm_waverespawndelay", 0 );)", 
        "     setDvar( \"class_assault_limit\", " + std::to_string(varTxto->cAssoult) +" );",
        "     setDvar( \"class_specops_limit\", " + std::to_string(varTxto->cSpecops) +" );",
        "     setDvar( \"class_demolitions_limit\", " + std::to_string(varTxto->cDemolitions) +" );",
        "     setDvar( \"class_sniper_limit\", " + std::to_string(varTxto->cSniper) +" );",
        R"(     setDvar( "class_assault_allowdrop", 1 );)",
        R"(     setDvar( "class_specops_allowdrop", 1 );)",
        R"(     setDvar( "class_demolitions_allowdrop", 0 );)",
        R"(     setDvar( "class_sniper_allowdrop", 0 );)",
        R"(     setDvar( "weap_allow_m16", 1 );)",
        R"(     setDvar( "weap_allow_ak47", 1 );)",
        R"(     setDvar( "weap_allow_m4", 1 );)",
        R"(     setDvar( "weap_allow_g3", 1 );)",
        R"(     setDvar( "weap_allow_g36c", 1 );)",
        R"(     setDvar( "weap_allow_m14", 1 );)",
        R"(     setDvar( "weap_allow_mp44", 1 );)",
        R"(     setDvar( "attach_allow_assault_none", 1 );)",
        R"(     setDvar( "attach_allow_assault_silencer", 1 );)",
        R"(     setDvar( "weap_allow_mp5", 1 );)",
        R"(     setDvar( "weap_allow_uzi", 1 );)",
        R"(     setDvar( "weap_allow_ak74u", 1 );)",
        R"(     setDvar( "attach_allow_specops_none", 1 );)",
        R"(     setDvar( "attach_allow_specops_silencer", 1 );)",
        R"(     setDvar( "weap_allow_m1014", 1 );)",
        R"(     setDvar( "weap_allow_winchester1200", 1 );)",
        R"(     setDvar( "weap_allow_m40a3", 1 );)",
        R"(     setDvar( "weap_allow_remington700", 1 );)",
        R"(     setDvar( "weap_allow_beretta", 1 );)",
        R"(     setDvar( "weap_allow_colt45", 1 );)",
        R"(     setDvar( "weap_allow_usp", 1 );)",
        R"(     setDvar( "weap_allow_deserteagle", 1 );)",
        R"(     setDvar( "weap_allow_deserteaglegold", 1 );)",
        R"(     setDvar( "attach_allow_pistol_none", 1 );)",
        R"(     setDvar( "attach_allow_pistol_silencer", 1 );)",
        "     setDvar( \"weap_allow_flash_grenade\", " + std::to_string(varTxto->grFlash) + " );",
        "     setDvar( \"weap_allow_frag_grenade\", " + std::to_string(varTxto->grFrag) + " );",
        "     setDvar( \"weap_allow_smoke_grenade\", " + std::to_string(varTxto->grSmoke) + " );",
        R"(     setDvar( "class_assault_primary", "ak47" );)",
        R"(     setDvar( "class_assault_primary_attachment", "none" );)",
        R"(     setDvar( "class_assault_secondary", "deserteagle" );)",
        R"(     setDvar( "class_assault_secondary_attachment", "none" );)",
        R"(     setDvar( "class_assault_grenade", "smoke_grenade" );)",
        R"(     setDvar( "class_assault_camo", "camo_none" );)",
        R"(     setDvar( "class_specops_primary", "ak74u" );)",
        R"(     setDvar( "class_specops_primary_attachment", "none" );)",
        R"(     setDvar( "class_specops_secondary", "deserteagle" );)",
        R"(     setDvar( "class_specops_secondary_attachment", "none" );)",
        R"(     setDvar( "class_specops_grenade", "smoke_grenade" );)",
        R"(     setDvar( "class_specops_camo", "camo_none" );)",
        R"(     setDvar( "class_demolitions_primary", "winchester1200" );)",
        R"(     setDvar( "class_demolitions_primary_attachment", "none" );)",
        R"(     setDvar( "class_demolitions_secondary", "deserteagle" );)",
        R"(     setDvar( "class_demolitions_secondary_attachment", "none" );)",
        R"(     setDvar( "class_demolitions_grenade", "smoke_grenade" );)",
        R"(     setDvar( "class_demolitions_camo", "camo_none" );)",
        R"(     setDvar( "class_sniper_primary", "m40a3" );)",
        R"(     setDvar( "class_sniper_primary_attachment", "none" );)",
        R"(     setDvar( "class_sniper_secondary", "deserteagle" );)",
        R"(     setDvar( "class_sniper_secondary_attachment", "none" );)",
        R"(     setDvar( "class_sniper_grenade", "smoke_grenade" );)",
        R"(     setDvar( "class_sniper_camo", "camo_none" );)",
        R"(     setDvar( "scr_team_fftype", 1 );)", 
        R"(     setDvar( "scr_team_teamkillpointloss", 5 );)", 
        R"(     setDvar( "scr_player_forcerespawn", 1 );)", 
        R"(     setDvar( "scr_game_deathpointloss", 0 );)", 
        R"(     setDvar( "scr_game_suicidepointloss", 0 );)", 
        R"(     setDvar( "scr_player_suicidespawndelay", 0 );)", 
        "     setDvar( \"bg_fallDamageMinHeight\", " + std::to_string(varTxto->fdMin) + " );", 
        "     setDvar( \"bg_fallDamageMaxHeight\", " + std::to_string(varTxto->fdMax) + " );",
        R"(     setDvar( "logfile", 1 );)",
        R"(     setDvar( "g_log", "games_mp.log" );)",
        R"(     setDvar( "g_logSync", 0 );)",
        R"(     setDvar( "g_inactivity", 0 );)",
        R"(     setDvar( "g_no_script_spam", 1 );)",
        R"(     setDvar( "g_antilag", 1 );)",
        R"(     setDvar( "g_smoothClients", 1 );)",
        R"(     setDvar( "sv_allowDownload", 1 );)",
        R"(     setDvar( "sv_maxPing", 0 );)",
        R"(     setDvar( "sv_minPing", 0 );)",
        R"(     setDvar( "sv_reconnectlimit", 3 );)",
        R"(     setDvar( "sv_timeout", 240 );)",
        R"(     setDvar( "sv_zombietime", 2 );)",
        R"(     setDvar( "sv_floodprotect", 4 );)",
        R"(     setDvar( "sv_kickBanTime", 0 );)",
        R"(     setDvar( "sv_disableClientConsole", 0 );)",
        R"(     setDvar( "sv_voice", 0 );)",
        R"(     setDvar( "sv_clientarchive", 1 );)",
        R"(     setDvar( "timescale", 1 );)",
        R"(     setDvar( "g_allowVote", 0 );)", 
        R"(     setDvar( "g_deadChat", 1 );)", 
        "     setDvar( \"scr_game_allowkillcam\", " + std::to_string(varTxto->killCam) + " );",
        R"(     setDvar( "scr_game_spectatetype", 1 );)", 
        R"(     setDvar( "scr_game_matchstarttime", 10 );)", 
        R"(     setDvar( "scr_enable_hiticon", 2 );)", 
        R"(     setDvar( "scr_enable_scoretext", 1 );)", 
        R"(     setDvar( "promod_allow_strattime", 0 );)", 
        R"(     setDvar( "promod_allow_readyup", 0 );)", 
        R"(     setDvar( "promod_kniferound", 0 );)", 
        R"(     setDvar( "g_maxDroppedWeapons", 16 );)", 
        R"(     setDvar( "scr_hardcore", 0 );)", 
        "     setDvar( \"promod_hud_website\", " + varTxto->domain + " );", 
        R"(     setDvar( "promod_mc_enable", 0 );)", 
        R"(     setDvar( "promod_mc_rs_every_round", 0 );)", 
        R"(     setDvar( "promod_mc_delay", 45 );)", 
        R"(     setDvar( "promod_mc_loopdelay", 45 );)", 
        R"(     setDvar( "promod_mc_maxmessages", 3 );)", 
        R"(     setDvar( "promod_mc_message_1", "Message Center ON" );)",
        R"(     setDvar( "promod_mc_message_2", "Set Me Up Or Turn Me OFF" );)",
        R"(     setDvar( "promod_mc_message_3", "<*nextmap*>" );)",
        R"(     setDvar( "promod_mc_messagedelay_1", 0 );)", 
        R"(     setDvar( "promod_mc_messagedelay_2", 0 );)",
        R"(     setDvar( "promod_mc_messagedelay_3", 0 );)",
        "}"
    };
    try {
        std::ofstream fw("C:\\Users\\dd\\Desktop\\Automatic-Promod-Custom-Cod4\\resources\\promod4-master\\promod_ruleset\\custom_public.txt", std::ofstream::out);
        if (fw.is_open())
        {
        for (int i = 0; i < arrayTam; i++) {
            fw << arrayTxt[i] << "\n";
        }
        fw.close();
        }
        else std::cout << "Problem with opening file";
    }
    catch (const char* msg) {
        std::cerr << msg << std::endl;
    }
}