#include "includes.h"

// execution callbacks..
void callbacks::SkinUpdate( ) {
	g_skins.m_update = true;
}

void callbacks::ForceFullUpdate( ) {
	//static DWORD tick{};
	//
	//if( tick != g_winapi.GetTickCount( ) ) {
	//	g_csgo.cl_fullupdate->m_callback( );
	//	tick = g_winapi.GetTickCount( );
	//

	g_csgo.m_cl->m_delta_tick = -1;
}

void callbacks::ToggleLeft() {
	g_hvh.m_left = !g_hvh.m_left;
	g_hvh.m_right = false;
	g_hvh.m_back = false;
	g_hvh.m_forward = false;
}

void callbacks::ToggleRight() {
	g_hvh.m_right = !g_hvh.m_right;
	g_hvh.m_left = false;
	g_hvh.m_back = false;
	g_hvh.m_forward = false;
}

void callbacks::ToggleBack() {
	g_hvh.m_back = !g_hvh.m_back;
	g_hvh.m_left = false;
	g_hvh.m_right = false;
	g_hvh.m_forward = false;
}

void callbacks::ToggleForward() {
	g_hvh.m_forward = !g_hvh.m_forward;
	g_hvh.m_left = false;
	g_hvh.m_right = false;
	g_hvh.m_back = false;
}

bool callbacks::droppedwpnson() {
	return g_menu.main.visuals.items.get() || g_menu.main.visuals.items_distance.get() || g_menu.main.visuals.itemsglow.get();
}

bool callbacks::droppedglowewpaon() {
	return g_menu.main.visuals.itemsglow.get();
}

bool callbacks::ammoon() {
	return g_menu.main.visuals.ammo.get();
}

bool callbacks::isbullettracer() {
	return g_menu.main.visuals.impact_beams.get();
}

bool callbacks::grenadeson() {
	return g_menu.main.visuals.proj.get();
}

bool callbacks::bombon() {
	return g_menu.main.visuals.planted_c4.get();
}

bool callbacks::boxon() {
	return g_menu.main.players.box.get();
}

bool callbacks::nameon() {
	return g_menu.main.players.name.get();
}

bool callbacks::weaponiconon() {
	return g_menu.main.players.weaponicon.get();
}

bool callbacks::skeleton() {
	return g_menu.main.players.skeleton.get();
}

bool callbacks::outofpov() {
	return g_menu.main.players.offscreen.get();
}

bool callbacks::soundesp() {
	return g_menu.main.players.footstep.get();
}

bool callbacks::lbytimeron() {
	return g_menu.main.players.lby_update.get();
}

bool callbacks::glowon() {
	return g_menu.main.players.glow.get();
}

bool callbacks::ammpespon() {
	return g_menu.main.players.ammo.get();
}

bool callbacks::IsChamsSelection0() {
	return g_menu.main.players.chams_entity_selection.get() == 0;
}

bool callbacks::LocalGlowChamsSelection()
{
	return g_menu.main.players.chams_entity_selection.get() == 0 && g_menu.main.players.chams_local_mat.get() == 4;
}

bool callbacks::IsChamsSelection1() {
	return g_menu.main.players.chams_entity_selection.get() == 1;
}

bool callbacks::EnemyGlowChamsSelection()
{
	return g_menu.main.players.chams_entity_selection.get() == 1 && g_menu.main.players.chams_enemy_mat.get() == 4;
}

bool callbacks::EnemyMetallicChamsSelection()
{
	return g_menu.main.players.chams_entity_selection.get() == 1 && g_menu.main.players.chams_enemy_mat.get() == 2;
}

bool callbacks::IsChamsSelection2() {
	return g_menu.main.players.chams_entity_selection.get() == 2;
}

bool callbacks::IsChamsSelection3() {
	return g_menu.main.players.chams_entity_selection.get() == 3;
}

bool callbacks::IsChamsSelection4()
{
	return g_menu.main.players.chams_entity_selection.get() == 4;
}

bool callbacks::IsChamsSelection5()
{
	return g_menu.main.players.chams_entity_selection.get() == 5;
}

bool callbacks::IsChamsSelection6() {
	return g_menu.main.players.chams_entity_selection.get() == 6;
}

bool callbacks::FakeGlowChamsSelection()
{
	return g_menu.main.players.chams_entity_selection.get() == 4 && g_menu.main.players.chams_fake_mat.get() == 4;
}

bool callbacks::trajectoryon() {
	return g_menu.main.visuals.tracers.get();
}

bool callbacks::peneton() {
	return g_menu.main.visuals.pen_crosshair.get();
}

void callbacks::ToggleForceBodyAim() {
	g_aimbot.m_force_body = !g_aimbot.m_force_body;
}

bool callbacks::IsDelayShot() {
	// return g_menu.main.aimbot.delay_shot.get();
	return true;
}

bool callbacks::IsPFBOn() {
	return g_menu.main.aimbot.prefer_baim.get();
}

bool callbacks::IsAstopOn() {
	return g_menu.main.aimbot.quick_stop.get();
}

bool callbacks::IsInAirAstop() {
	return g_menu.main.aimbot.quick_stop_mode.get(3);
}

bool callbacks::IsNightMode() {
	return g_menu.main.visuals.world.get(0);
}

bool callbacks::isambient() {
	return g_menu.main.visuals.world.get(2);
}

void callbacks::ToggleThirdPerson( ) {
	g_visuals.m_thirdperson = !g_visuals.m_thirdperson;
}

bool callbacks::enemy_on() {
	return g_menu.main.visuals.local_or_enemy_impacts.get() == 1;
}

bool callbacks::local_on() {
	return g_menu.main.visuals.local_or_enemy_impacts.get() == 0;
}

bool callbacks::local_on_laser() {
	return g_menu.main.visuals.local_material_type.get() == 1;
}

bool callbacks::enemy_on_laser() {
	return g_menu.main.visuals.enemy_material_type.get() == 1;
}

bool callbacks::local_on_impacts() {
	return g_menu.main.visuals.impact_beams2.get();
}

bool callbacks::enemy_on_impacts() {
	return g_menu.main.visuals.impact_beams3.get();
}

bool callbacks::local_on_impacts2() {
	return g_menu.main.visuals.impact_beams.get();
}

bool callbacks::ToggleFakeWalkOn() {
	return g_menu.main.misc.enablefakewalk.get();
}

bool callbacks::retry_on() {
	return g_menu.main.misc.retryc.get();
}

bool callbacks::IsProjectiles() {
	return g_menu.main.visuals.proj.get();
}


void callbacks::ToggleFakeLatency( ) {
	g_aimbot.m_fake_latency = !g_aimbot.m_fake_latency;
	g_aimbot.m_fake_latency2 = false;
}

bool callbacks::ToggleFakeLatencyOn() {
	return g_menu.main.misc.fake_latency.get() != -1;
}

void callbacks::ToggleSecondarayFakeLatency() {
	g_aimbot.m_fake_latency2 = !g_aimbot.m_fake_latency2;
	g_aimbot.m_fake_latency = false;
}

bool callbacks::ToggleSecondaryFakeLatencyOn() {
	return g_menu.main.misc.secondary_fake_latency.get() != -1;
}


bool callbacks::backgroundindicalphawhatever() {
	return g_menu.main.misc.esp_style.get() == 1;
}

bool callbacks::autobuyon() {
	return g_menu.main.misc.enableautobuy.get();
}

void callbacks::ToggleKillfeed( ) {
    KillFeed_t* feed = ( KillFeed_t* )g_csgo.m_hud->FindElement( HASH( "SFHudDeathNoticeAndBotStatus" ) );
    if( feed )
        g_csgo.ClearNotices( feed );
}

void callbacks::SaveHotkeys( ) {
	g_config.SaveHotkeys( );
}

void callbacks::ConfigLoad1( ) {
	g_config.load( &g_menu.main, XOR( "1.web" ) );
	g_menu.main.misc.config.select( 1 - 1 );

	g_notify.add( tfm::format( XOR( "loaded config 1\n" ) ) );
}

void callbacks::ConfigLoad2( ) {
	g_config.load( &g_menu.main, XOR( "2.web" ) );
	g_menu.main.misc.config.select( 2 - 1 );
	g_notify.add( tfm::format( XOR( "loaded config 2\n" ) ) );
}

void callbacks::ConfigLoad3( ) {
	g_config.load( &g_menu.main, XOR( "3.web" ) );
	g_menu.main.misc.config.select( 3 - 1 );
	g_notify.add( tfm::format( XOR( "loaded config 3\n" ) ) );
}

void callbacks::ConfigLoad4( ) {
	g_config.load( &g_menu.main, XOR( "4.web" ) );
	g_menu.main.misc.config.select( 4 - 1 );
	g_notify.add( tfm::format( XOR( "loaded config 4\n" ) ) );
}

void callbacks::ConfigLoad5( ) {
	g_config.load( &g_menu.main, XOR( "5.web" ) );
	g_menu.main.misc.config.select( 5 - 1 );
	g_notify.add( tfm::format( XOR( "loaded config 5\n" ) ) );
}

void callbacks::ConfigLoad6( ) {
	g_config.load( &g_menu.main, XOR( "6.web" ) );
	g_menu.main.misc.config.select( 6 - 1 );
	g_notify.add( tfm::format( XOR( "loaded config 6\n" ) ) );
}

void callbacks::ConfigLoad( ) {
	std::string config = g_menu.main.misc.config.GetActiveItem( );
	std::string file   = tfm::format( XOR( "%s.web" ), config.data( ) );

	g_config.load( &g_menu.main, file );
	g_notify.add( tfm::format( XOR( "loaded config %s\n" ), config.data( ) ) );
}

void callbacks::ConfigSave( ) {
	std::string config = g_menu.main.misc.config.GetActiveItem( );
	std::string file   = tfm::format( XOR( "%s.web" ), config.data( ) );

	g_config.save( &g_menu.main, file );
	g_notify.add( tfm::format( XOR( "saved config %s\n" ), config.data( ) ) );
}

void callbacks::emporium() {
	g_csgo.m_engine->ExecuteClientCmd("connect na.dontddos.com");
}

void callbacks::retry() {
	if (g_menu.main.misc.retry.get() && g_menu.main.misc.retryc.get()) 
		g_csgo.m_engine->ExecuteClientCmd("retry");
}

bool callbacks::IsHitchanceOn( ) {
	return g_menu.main.aimbot.hitchance.get( );
}

bool callbacks::IsHitmarker( ) {
	return g_menu.main.players.hitmarker.get( );
}

bool callbacks::IsAccuracyBoostOn() {
	return g_menu.main.aimbot.accuracy_boost.get();
}
bool callbacks::IsHitchancAireOn() {
	return g_menu.main.aimbot.hitchance_in_air.get();
}


bool callbacks::IsMultipointOn( ) {
	return !g_menu.main.aimbot.multipoint.GetActiveIndices( ).empty( );
}



bool callbacks::IsMultipointBodyOn( ) {
	return g_menu.main.aimbot.multipoint.get( 2 );
}

bool callbacks::IsAntiAimModeStand( ) {
	return g_menu.main.antiaim.mode.get( ) == 0;
}

bool callbacks::IsSwitchFakeBody() {
	return g_menu.main.antiaim.body_yaw.get() == 3;
}


bool callbacks::IsCustomBody() {
	return g_menu.main.antiaim.body_yaw.get() == 1;
}

bool callbacks::IsCustomTwist() {
	return g_menu.main.antiaim.body_yaw.get() == 2;
}

bool callbacks::IsUsingDistortion() {
	return g_menu.main.antiaim.distortion.get();
}

bool callbacks::HasStandYaw( ) {
	return g_menu.main.antiaim.yaw_stand.get( ) > 0;
}

bool callbacks::IsStandYawJitter( ) {
	return g_menu.main.antiaim.yaw_stand.get( ) == 2;
}

bool callbacks::IsStandYawRotate( ) {
	return g_menu.main.antiaim.yaw_stand.get( ) == 3;
}

bool callbacks::IsStandYawRnadom( ) {
	return g_menu.main.antiaim.yaw_stand.get( ) == 4;
}

bool callbacks::IsStandDirAuto( ) {
	return g_menu.main.antiaim.dir_stand.get( ) == 0;
}

bool callbacks::IsStandDirCustom( ) {
	return g_menu.main.antiaim.dir_stand.get( ) == 4;
}

bool callbacks::IsAntiAimModeWalk( ) {
	return g_menu.main.antiaim.mode.get( ) == 1;
}

bool callbacks::WalkHasYaw( ) {
	return g_menu.main.antiaim.yaw_walk.get( ) > 0;
}

bool callbacks::IsWalkYawJitter( ) {
	return g_menu.main.antiaim.yaw_walk.get( ) == 2;
}

bool callbacks::IsWalkYawRotate( ) {
	return g_menu.main.antiaim.yaw_walk.get( ) == 3;
}

bool callbacks::IsWalkYawRandom( ) {
	return g_menu.main.antiaim.yaw_walk.get( ) == 4;
}

bool callbacks::IsWalkDirAuto( ) {
	return g_menu.main.antiaim.dir_walk.get( ) == 0;
}

bool callbacks::IsWalkDirCustom( ) {
	return g_menu.main.antiaim.dir_walk.get( ) == 4;
}

bool callbacks::IsAntiAimModeAir( ) {
	return g_menu.main.antiaim.mode.get( ) == 2;
}

bool callbacks::AirHasYaw( ) {
	return g_menu.main.antiaim.yaw_air.get( ) > 0;
}

bool callbacks::IsAirYawJitter( ) {
	return g_menu.main.antiaim.yaw_air.get( ) == 2;
}

bool callbacks::IsAirYawRotate( ) {
	return g_menu.main.antiaim.yaw_air.get( ) == 3;
}

bool callbacks::IsAirYawRandom( ) {
	return g_menu.main.antiaim.yaw_air.get( ) == 4;
}

bool callbacks::IsAirDirAuto( ) {
	return g_menu.main.antiaim.dir_air.get( ) == 0;
}

bool callbacks::IsAirDirCustom( ) {
	return g_menu.main.antiaim.dir_air.get( ) == 4;
}

bool callbacks::IsFakeAntiAimRelative( ) {
	return g_menu.main.antiaim.fake_yaw.get( ) == 2;
}

bool callbacks::IsFakeAntiAimJitter( ) {
	return g_menu.main.antiaim.fake_yaw.get( ) == 3;
}


bool callbacks::IsFluctuateOn() {
	return g_menu.main.antiaim.fakelag_fluct.get();
}

bool callbacks::landon() {
	return g_menu.main.antiaim.allow_land.get();
}

bool callbacks::IsConfig1( ) {
	return g_menu.main.misc.config.get( ) == 0;
}

bool callbacks::IsConfig2( ) {
	return g_menu.main.misc.config.get( ) == 1;
}

bool callbacks::IsConfig3( ) {
	return g_menu.main.misc.config.get( ) == 2;
}

bool callbacks::IsConfig4( ) {
	return g_menu.main.misc.config.get( ) == 3;
}

bool callbacks::IsConfig5( ) {
	return g_menu.main.misc.config.get( ) == 4;
}

bool callbacks::IsConfig6( ) {
	return g_menu.main.misc.config.get( ) == 5;
}

// weaponcfgs callbacks.
bool callbacks::DEAGLE( ) {
	if( !g_csgo.m_engine->IsInGame( ) || !g_cl.m_processing )
		return false;

	return g_cl.m_weapon_id == Weapons_t::DEAGLE;
}

bool callbacks::ELITE( ) {
	if( !g_csgo.m_engine->IsInGame( ) || !g_cl.m_processing )
		return false;

	return g_cl.m_weapon_id == Weapons_t::ELITE;
}

bool callbacks::FIVESEVEN( ) {
	if( !g_csgo.m_engine->IsInGame( ) || !g_cl.m_processing )
		return false;

	return g_cl.m_weapon_id == Weapons_t::FIVESEVEN;
}

bool callbacks::GLOCK( ) {
	if( !g_csgo.m_engine->IsInGame( ) || !g_cl.m_processing )
		return false;

	return g_cl.m_weapon_id == Weapons_t::GLOCK;
}

bool callbacks::AK47( ) {
	if( !g_csgo.m_engine->IsInGame( ) || !g_cl.m_processing )
		return false;

	return g_cl.m_weapon_id == Weapons_t::AK47;
}

bool callbacks::AUG( ) {
	if( !g_csgo.m_engine->IsInGame( ) || !g_cl.m_processing )
		return false;

	return g_cl.m_weapon_id == Weapons_t::AUG;
}

bool callbacks::AWP( ) {
	if( !g_csgo.m_engine->IsInGame( ) || !g_cl.m_processing )
		return false;

	return g_cl.m_weapon_id == Weapons_t::AWP;
}

bool callbacks::FAMAS( ) {
	if( !g_csgo.m_engine->IsInGame( ) || !g_cl.m_processing )
		return false;

	return g_cl.m_weapon_id == Weapons_t::FAMAS;
}

bool callbacks::G3SG1( ) {
	if( !g_csgo.m_engine->IsInGame( ) || !g_cl.m_processing )
		return false;

	return g_cl.m_weapon_id == Weapons_t::G3SG1;
}

bool callbacks::GALIL( ) {
	if( !g_csgo.m_engine->IsInGame( ) || !g_cl.m_processing )
		return false;

	return g_cl.m_weapon_id == Weapons_t::GALIL;
}

bool callbacks::M249( ) {
	if( !g_csgo.m_engine->IsInGame( ) || !g_cl.m_processing )
		return false;

	return g_cl.m_weapon_id == Weapons_t::M249;
}

bool callbacks::M4A4( ) {
	if( !g_csgo.m_engine->IsInGame( ) || !g_cl.m_processing )
		return false;

	return g_cl.m_weapon_id == Weapons_t::M4A4;
}

bool callbacks::MAC10( ) {
	if( !g_csgo.m_engine->IsInGame( ) || !g_cl.m_processing )
		return false;

	return g_cl.m_weapon_id == Weapons_t::MAC10;
}

bool callbacks::P90( ) {
	if( !g_csgo.m_engine->IsInGame( ) || !g_cl.m_processing )
		return false;

	return g_cl.m_weapon_id == Weapons_t::P90;
}

bool callbacks::UMP45( ) {
	if( !g_csgo.m_engine->IsInGame( ) || !g_cl.m_processing )
		return false;

	return g_cl.m_weapon_id == Weapons_t::UMP45;
}

bool callbacks::XM1014( ) {
	if( !g_csgo.m_engine->IsInGame( ) || !g_cl.m_processing )
		return false;

	return g_cl.m_weapon_id == Weapons_t::XM1014;
}

bool callbacks::BIZON( ) {
	if( !g_csgo.m_engine->IsInGame( ) || !g_cl.m_processing )
		return false;

	return g_cl.m_weapon_id == Weapons_t::BIZON;
}

bool callbacks::MAG7( ) {
	if( !g_csgo.m_engine->IsInGame( ) || !g_cl.m_processing )
		return false;

	return g_cl.m_weapon_id == Weapons_t::MAG7;
}

bool callbacks::NEGEV( ) {
	if( !g_csgo.m_engine->IsInGame( ) || !g_cl.m_processing )
		return false;

	return g_cl.m_weapon_id == Weapons_t::NEGEV;
}

bool callbacks::SAWEDOFF( ) {
	if( !g_csgo.m_engine->IsInGame( ) || !g_cl.m_processing )
		return false;

	return g_cl.m_weapon_id == Weapons_t::SAWEDOFF;
}

bool callbacks::TEC9( ) {
	if( !g_csgo.m_engine->IsInGame( ) || !g_cl.m_processing )
		return false;

	return g_cl.m_weapon_id == Weapons_t::TEC9;
}

bool callbacks::P2000( ) {
	if( !g_csgo.m_engine->IsInGame( ) || !g_cl.m_processing )
		return false;

	return g_cl.m_weapon_id == Weapons_t::P2000;
}

bool callbacks::MP7( ) {
	if( !g_csgo.m_engine->IsInGame( ) || !g_cl.m_processing )
		return false;

	return g_cl.m_weapon_id == Weapons_t::MP7;
}

bool callbacks::MP9( ) {
	if( !g_csgo.m_engine->IsInGame( ) || !g_cl.m_processing )
		return false;

	return g_cl.m_weapon_id == Weapons_t::MP9;
}

bool callbacks::NOVA( ) {
	if( !g_csgo.m_engine->IsInGame( ) || !g_cl.m_processing )
		return false;

	return g_cl.m_weapon_id == Weapons_t::NOVA;
}

bool callbacks::P250( ) {
	if( !g_csgo.m_engine->IsInGame( ) || !g_cl.m_processing )
		return false;

	return g_cl.m_weapon_id == Weapons_t::P250;
}

bool callbacks::SCAR20( ) {
	if( !g_csgo.m_engine->IsInGame( ) || !g_cl.m_processing )
		return false;

	return g_cl.m_weapon_id == Weapons_t::SCAR20;
}

bool callbacks::SG553( ) {
	if( !g_csgo.m_engine->IsInGame( ) || !g_cl.m_processing )
		return false;

	return g_cl.m_weapon_id == Weapons_t::SG553;
}

bool callbacks::SSG08( ) {
	if( !g_csgo.m_engine->IsInGame( ) || !g_cl.m_processing )
		return false;

	return g_cl.m_weapon_id == Weapons_t::SSG08;
}

bool callbacks::M4A1S( ) {
	if( !g_csgo.m_engine->IsInGame( ) || !g_cl.m_processing )
		return false;

	return g_cl.m_weapon_id == Weapons_t::M4A1S;
}

bool callbacks::USPS( ) {
	if( !g_csgo.m_engine->IsInGame( ) || !g_cl.m_processing )
		return false;

	return g_cl.m_weapon_id == Weapons_t::USPS;
}

bool callbacks::CZ75A( ) {
	if( !g_csgo.m_engine->IsInGame( ) || !g_cl.m_processing )
		return false;

	return g_cl.m_weapon_id == Weapons_t::CZ75A;
}

bool callbacks::REVOLVER( ) {
	if( !g_csgo.m_engine->IsInGame( ) || !g_cl.m_processing )
		return false;

	return g_cl.m_weapon_id == Weapons_t::REVOLVER;
}

bool callbacks::KNIFE_BAYONET( ) {
	if( !g_csgo.m_engine->IsInGame( ) || !g_cl.m_processing )
		return false;

	return g_cl.m_weapon_id == Weapons_t::KNIFE_BAYONET;
}

bool callbacks::KNIFE_FLIP( ) {
	if( !g_csgo.m_engine->IsInGame( ) || !g_cl.m_processing )
		return false;

	return g_cl.m_weapon_id == Weapons_t::KNIFE_FLIP;
}

bool callbacks::KNIFE_GUT( ) {
	if( !g_csgo.m_engine->IsInGame( ) || !g_cl.m_processing )
		return false;

	return g_cl.m_weapon_id == Weapons_t::KNIFE_GUT;
}

bool callbacks::KNIFE_KARAMBIT( ) {
	if( !g_csgo.m_engine->IsInGame( ) || !g_cl.m_processing )
		return false;

	return g_cl.m_weapon_id == Weapons_t::KNIFE_KARAMBIT;
}

bool callbacks::KNIFE_M9_BAYONET( ) {
	if( !g_csgo.m_engine->IsInGame( ) || !g_cl.m_processing )
		return false;

	return g_cl.m_weapon_id == Weapons_t::KNIFE_M9_BAYONET;
}

bool callbacks::KNIFE_HUNTSMAN( ) {
	if( !g_csgo.m_engine->IsInGame( ) || !g_cl.m_processing )
		return false;

	return g_cl.m_weapon_id == Weapons_t::KNIFE_HUNTSMAN;
}

bool callbacks::KNIFE_FALCHION( ) {
	if( !g_csgo.m_engine->IsInGame( ) || !g_cl.m_processing )
		return false;

	return g_cl.m_weapon_id == Weapons_t::KNIFE_FALCHION;
}

bool callbacks::KNIFE_BOWIE( ) {
	if( !g_csgo.m_engine->IsInGame( ) || !g_cl.m_processing )
		return false;

	return g_cl.m_weapon_id == Weapons_t::KNIFE_BOWIE;
}

bool callbacks::KNIFE_BUTTERFLY( ) {
	if( !g_csgo.m_engine->IsInGame( ) || !g_cl.m_processing )
		return false;

	return g_cl.m_weapon_id == Weapons_t::KNIFE_BUTTERFLY;
}

bool callbacks::KNIFE_SHADOW_DAGGERS( ) {
	if( !g_csgo.m_engine->IsInGame( ) || !g_cl.m_processing )
		return false;

	return g_cl.m_weapon_id == Weapons_t::KNIFE_SHADOW_DAGGERS;
}

bool callbacks::IsOverrideDamage() {
	return g_menu.main.aimbot.override_dmg_key.get() != -1;
}

bool callbacks::IsLimitTarget() {
	return g_menu.main.aimbot.optimizations.get(0);
}
void callbacks::ToggleDMG() {
	g_aimbot.m_damage_toggle = !g_aimbot.m_damage_toggle;
}