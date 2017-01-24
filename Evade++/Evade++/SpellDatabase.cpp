#include "stdafx.h"
#include "SpellDatabase.h"
#include <vector>

SpellDatabase::SpellDatabase()
{
Spells.push_back(Aatrox",
		"AatroxE",		
		kSlotE,
		SkillshotMissileLine,
		250,
		1075,
		35,
		1250,
		true,
		true,
		3,
		false,
		"AatroxEConeMissle"));
#endregion Aatrox

#region Ahri
Spells.push_back(Ahri",
		kSlotQ,
		SkillshotMissileLine,
		250,
		1000,
		100,
		2500,	
		true,
		true,
		2,
		false,
		"AhriOrbMissile"));

Spells.push_back(Ahri",
		"AhriOrbReturn",
		kSlotQ,
		SkillshotMissileLine,
		250,
		1000,
		100,
		60,
		true,
		true,
		2,
		false,
		"AhriOrbReturn"));

Spells.push_back(Ahri",
		"AhriSeduce",
		kSlotE,
		SkillshotMissileLine,
		250,
		1000,
		60,
		1600,
		true,
		true,
		3,
		true,
		"AhriSeduceMissile"));
#endregion Ahri

#region Alistar
Spells.push_back(Alistar",
		"Pulverize",
		kSlotQ,
		SkillshotCircle,
		250,
		365,
		365,
		int.MaxValue,
		true,
		true,
		3,
		true,
		"Pulverize"));
#endregion Alistar

#region Amumu
Spells.push_back(Amumu",
		"BandageToss",
		kSlotQ,
		SkillshotMissileLine,
		250,
		1100,
		90,
		2000,
		true,
		true,
		3,
		true,
		"SadMummyBandageToss"));

Spells.push_back(Amumu",
		"CurseoftheSadMummy",
		kSlotR,,
		SkillshotCircle,
		250,
		0,
		550,
		int.MaxValue,
		true,
		false,
		5,
		true,
		"CurseoftheSadMummy"));
#endregion Amumu

#region Anivia
Spells.push_back(Anivia",
		"FlashFrost",
		kSlotQ,
		SkillshotMissileLine,
		250,
		1100,
		150,
		850,
		true,
		true,
		3,
		true,
		"FlashFrostSpell",
#endregion Anivia

#region Annie
Spells.push_back(Annie",
		"Incinerate",
		kSlotW,
		SkillshotCone,
		250,
		625,
		50,
		int.MaxValue,
		false,
		false,
		2,
		false,
		"Incinerate"));

Spells.push_back(Annie",
		"InfernalGuardian",
		kSlotR,,
		SkillshotCircle,
		250,
		600,
		290,
		int.MaxValue,
		false,
		true,
		5,
		true,
		"InfernalGuardian"));
#endregion Annie

#region Ashe
Spells.push_back(Ashe",
		"Volley",
		kSlotW,
		SkillshotMissileLine,
		250,
		1250,
		60,
		2000,
		true,
		true,
		2,
		false,
		"VolleyAttack"));

Spells.push_back(Ashe",
		"EnchantedCrystalArrow",
		kSlotR,,
		SkillshotMissileLine,
		250,
		25000,
		130,
		1600,
		true,
		true,
		5,
		true,
		"EnchantedCrystalArrow"));
#endregion Ashe

#region Aurelion Sol
Spells.push_back(AurelionSol",
		"AurelionSolQ",
		kSlotQ,
		SkillshotMissileLine,
		250,
		1500,
		180,
		850,
		true,
		true,
		2,
		false,
		"AurelionSolQMissile"));

Spells.push_back(AurelionSol",
		"AurelionSolR",
		kSlotR,,
		SkillshotMissileLine,
		300,
		1420,
		120,
		4500,
		true,
		true,
		3,
		true,
		"AurelionSolRBeamMissile"));
#endregion Aurelion Sol
    
#region Azir
Spells.push_back(Azir",
		"AzirQSoldier",
		kSlotQ,
		SkillshotMissileLine,
		250,
		1000,
		80,
		2550,
		false,
		true,
		3,
		false,
		"AzirQSoldier"));

Spells.push_back(Azir",
		"AzirR",
		kSlotR,,
		SkillshotMissileLine,
		250,
		700,
		450,
		1400,
		true,
		true,
		5,
		true,
		"AzirSoldierRMissile"));
#endregion Azir
    
#region Bard
Spells.push_back(Bard",
		"BardQ",
		kSlotQ,
		SkillshotMissileLine,
		250,
		950,
		60,
		1600,
		true,
		true,
		3,
		true,
		"BardQMissile"));

Spells.push_back(Bard",
		"BardR",
		kSlotR,,
		SkillshotCircle,
		500,
		3400,
		350,
		2100,
		false,
		true,
		2,
		false,
		"BardR"));
#endregion Bard

#region Blitzcrank
Spells.push_back(Blitzcrank",
		"RocketGrab",
		kSlotQ,
		SkillshotMissileLine,
		250,
		1050,
		70,
		1800,
		true,
		true,
		4,
		true,
		"RocketGrabMissile"));

Spells.push_back(Blitzcrank",
		"StaticField",
		kSlotR,,
		SkillshotCircle,
		250,
		0,
		600,
		int.MaxValue,
		true,
		false,
		2,
		false,
		"StaticField"));
#endregion Blitzcrank

#region Brand
Spells.push_back(Brand",
		"BrandQ",
		kSlotQ,
		SkillshotMissileLine,
		250,
		1100,
		60,
		1600,
		true,
		true,
		3,
		true,
		"BrandQMissile"));

Spells.push_back(Brand",
		"BrandW",
		kSlotW,
		SkillshotCircle,
		850,
		900,
		260,
		int.MaxValue,
		false,
		false,
		2,
		false,
		"BrandW"));
#endregion Brand

#region Braum
Spells.push_back(Braum",
		"BraumQ",
		kSlotQ,
		SkillshotMissileLine,
		250,
		1050,
		60,
		1700,
		true,
		true,
		3,
		true,
		"BraumQMissile"));

Spells.push_back(Braum",
		"BraumRWrapper",
		kSlotR,,
		SkillshotMissileLine,
		500,
		1250,
		115,
		1400,
		true,
		true,
		4,
		true,
		"braumrMissile"));
#endregion Braum

#region Caitlyn
Spells.push_back(Caitlyn",
		"CaitlynPiltoverPeacemaker",
		kSlotQ,
		SkillshotMissileLine,
		625,
		1300,
		90,
		2200,
		true,
		true,
		2,
		false,
		"CaitlynPiltoverPeacemaker"));

Spells.push_back(Caitlyn",
		"CaitlynEntrapment",
		kSlotE,
		SkillshotMissileLine,
		125,
		1000,
		70,
		1600,
		true,
		true,
		1,
		false,
		"CaitlynEntrapmentMissile"));
#endregion Caitlyn

#region Cassiopeia
Spells.push_back(Cassiopeia",
		"CassiopeiaQ",
		kSlotQ,
		SkillshotCircle,
		750,
		850,
		150,
		int.MaxValue,
		false,
		true,
		2,
		false,
		"CassiopeiaQ"));

//TODO: Add Cassiopeia W

Spells.push_back(Cassiopeia",
		"CassiopeiaR",
		kSlotR,,
		SkillshotCone,
		600,
		825,
		80,
		int.MaxValue,
		false,
		false,
		5,
		true,
		"CassiopeiaR"));
#endregion Cassiopeia

#region Chogath
Spells.push_back(Chogath",
		"Rupture",
		kSlotQ,
		SkillshotCircle,
		1200,
		950,
		175,
		int.MaxValue,
		false,
		true,
		3,
		false,
		"Rupture"));

Spells.push_back(Chogath",
		"FeralScream",
		kSlotW,
		SkillshotCone,
		250,
		585,
		60,
		int.MaxValue,
		true,
		true,
		2,
		false,
		"FeralScream"));
#endregion Chogath

#region Corki
Spells.push_back(Corki",
		"PhosphorusBomb",
		kSlotQ,
		SkillshotCircle,
		300,
		825,
		250,
		1000,
		false,
		true,
		2,
		false,
		"PhosphorusBombMissile"));

Spells.push_back(Corki",
		"MissileBarrage",
		kSlotR,,
		SkillshotMissileLine,
		200,
		1300,
		75,
		2000,
		true,
		true,
		2,
		false,
		"MissileBarrageMissile"));

Spells.push_back(Corki",
		"MissileBarrage2",
		kSlotR,,
		SkillshotMissileLine,
		200,
		1500,
		150,
		2000,
		true,
		true,
		2,
		false,
		"MissileBarrageMissile2"));
#endregion Corki

#region Darius
Spells.push_back(Darius",
		"DariusCleave",
		kSlotQ,
		SkillshotCircle,
		750,
		0,
		425 - 50,
		int.MaxValue, 
		true,
		true,
		3,
		false,
		"DariusCleave"));

Spells.push_back(Darius",
		"DariusAxeGrabCone",
		kSlotE,
		SkillshotCone,
		250,
		550,
		80,
		int.MaxValue,
		true,
		false,
		3,
		true,
		"DariusAxeGrabCone"));
#endregion Darius

#region Diana
Spells.push_back(Diana",
		"DianaArc",
		kSlotQ,
		SkillshotCircle,
		250,
		895,
		195,
		1400,
		false,
		true,
		3,
		true,
		"DianaArcArc"));
Spells.push_back(Diana",
		"DianaArcArc",
		kSlotQ,
		SkillshotArc
		250,
		895,
		195,
		1400,
		false,
		true,
		3,
		true,
		"DianaArcArc"));
#endregion Diana

#region DrMundo
Spells.push_back(DrMundo",
		"InfectedCleaverMissileCast",
		kSlotQ,
		SkillshotMissileLine,
		250,
		1050,
		60,
		2000,
		true,
		true,
		3,
		false,
		"InfectedCleaverMissile"));
#endregion DrMundo

#region Draven
Spells.push_back(Draven",
		"DravenDoubleShot",
		kSlotE,
		SkillshotMissileLine,
		250,
		1100,
		130,
		1400,
		true,
		true,
		3,
		true,
		"DravenDoubleShotMissile"));
		
Spells.push_back(Draven",
		"DravenRCast",
		kSlotR,,
		SkillshotMissileLine,
		400,
		25000,
		160,
		2000,
		true,
		true,
		5,
		true,
		"DravenR"));
#endregion Draven

#region Ekko
Spells.push_back(Ekko",
		"EkkoQ",
		kSlotQ,
		SkillshotMissileLine,
		250,
		1075,
		60,
		1650,
		true,
		true,
		4,
		true,
		"ekkoqmis"));

Spells.push_back(Ekko",
		"EkkoW",
		kSlotW,
		SkillshotCircle,
		3750,
		1600,
		400,
		1650,
		false,
		false,
		3,
		false,
		"EkkoW"));

Spells.push_back(Ekko",
		"EkkoR",
		kSlotR,,
		SkillshotCircle,
		250,
		1600,
		375,
		1650,
		true,
		true,
		3,
		false,
		"EkkoR"));
#endregion Ekko

#region Elise
Spells.push_back(Elise",
		"EliseHumanE",
		kSlotE,
		SkillshotMissileLine,
		250,
		1100,
		55,
		1600,
		true,
		true,
		4,
		true,
		"EliseHumanE"));
#endregion Elise

#region Evelynn
Spells.push_back(Evelynn",
		"EvelynnR",
		kSlotR,,
		SkillshotCircle,
		250,
		650,
		500,
		int.MaxValue,
		false,
		true,
		5,
		true,
		"EvelynnR"));
#endregion Evelynn

#region Ezreal
Spells.push_back(Ezreal",
		"EzrealMysticShot",
		kSlotQ,
		SkillshotMissileLine,
		250,
		1200,
		60,
		2000,
		true,
		true,
		2,
		false,
		"EzrealMysticShotMissile"));
		
Spells.push_back(Ezreal",
		"EzrealEssenceFlux",
		kSlotW,
		SkillshotMissileLine,
		250,
		1050,
		80,
		1600,
		true,
		true,
		2,
		false,
		"EzrealEssenceFluxMissile"));
		
Spells.push_back(Ezreal",
		"EzrealTrueshotBarrage",
		kSlotR,,
		SkillshotMissileLine,
		1000,
		25000,
		160,
		2000,
		true,
		true,
		3,
		true,
		"EzrealTrueshotBarrage"));
#endregion Ezreal

#region Fiora
Spells.push_back(Fiora",
		"FioraW",
		kSlotW,
		SkillshotMissileLine,
		500,
		800,
		70,
		3200,
		true,
		true,
		2,
		false,
		"FioraWMissile"));
#endregion Fiora

#region Fizz
    
//TODO: Add Fizz Q

Spells.push_back(Fizz",
		"FizzR",
		kSlotR,,
		SkillshotMissileLine,
		250,
		1275,
		110,
		1300,
		false,
		true,
		5,
		true,
		"FizzRMissile"));
#endregion Fizz

#region Galio
Spells.push_back(Galio",
		"GalioResoluteSmite",
		kSlotQ,
		SkillshotCircle,
		250,
		940,
		235,
		1300,
		false,
		true,
		2,
		false,
		"GalioResoluteSmite"));
		
Spells.push_back(Galio",
		"GalioRighteousGust",
		kSlotE,
		SkillshotMissileLine,
		250,
		1200,
		120,
		1200,
		true,
		true,
		2,
		false,
		"GalioRighteousGust"));

Spells.push_back(Galio",
		"GalioIdolOfDurand",
		kSlotR,,
		SkillshotCircle,
		250,
		0,
		600,
		int.MaxValue,
		true,
		false,
		5,
		true,
		"GalioIdolOfDurand"));
#endregion Galio

#region Gnar
Spells.push_back(Gnar",
		"GnarQ",
		kSlotQ,
		SkillshotMissileLine,
		250,
		1125,
		60,
		2500,
		true,
		true,
		2,
		false,
		"gnarqMissile"));

Spells.push_back(Gnar",
		"GnarQReturn",
		kSlotQ,
		SkillshotMissileLine,
		0,
		3000,
		75,
		60,
		true,
		true,
		2,
		false,
		"GnarQMissileReturn",

Spells.push_back(Gnar",
		"GnarBigQ",
		kSlotQ,
		SkillshotMissileLine,
		500,
		1150,
		90,
		2100,
		true,
		true,
		2,
		false,
		"GnarBigQMissile"));

Spells.push_back(Gnar",
		"GnarBigW",
		kSlotW,
		SkillshotLine
		600,
		600,
		80,
		int.MaxValue,
		true,
		true,
		2,
		false,
		"GnarBigW"));
		
Spells.push_back(Gnar",
		"GnarE",
		kSlotE,
		SkillshotCircle,
		0,
		475,
		150,
		903,
		false,
		true,
		2,
		false,
		"GnarE"));

Spells.push_back(Gnar",
		"GnarBigE",
		kSlotE,
		SkillshotCircle,
		250,
		475,
		200,
		1000,
		false,
		true,
		2,
		false,
		"GnarBigE"));

Spells.push_back(Gnar",
		"GnarR",
		kSlotR,,
		SkillshotCircle,
		250,
		0,
		590,
		int.MaxValue,
		true,
		false,
		5,
		true,
		"GnarR"));
#endregion Gnar

#region Gragas
Spells.push_back(Gragas",
		"GragasQ",
		kSlotQ,
		SkillshotCircle,
		250,
		1100,
		275,
		1300,
		false,
		true,
		2,
		false,
		"GragasQMissile"));

Spells.push_back(Gragas",
		"GragasE",
		kSlotE,
		SkillshotMissileLine,
		0,
		950,
		200,
		1200,
		true,
		true,
		2,
		false,
		"GragasE"));

Spells.push_back(Gragas",
		"GragasR",
		kSlotR,,
		SkillshotCircle,
		250,
		1150,
		400,
		1800,
		false,
		true,
		5,
		true,
		"GragasRBoom"));
#endregion Gragas

#region Graves

//TODO: Fix return detection
Spells.push_back(Graves",
		"GravesQLineSpell",
		kSlotQ,
		SkillshotMissileLine,
		250,
		950,
		40,
		3000,
		true,
		true,
		3,
		false,
		"GravesQLineMis"));

Spells.push_back(Graves",
		"GravesSmokeGrenade",
		kSlotW,
		SkillshotCircle,
		250,
		950,
		250,
		1000,
		false,
		true,
		2,
		true,
		"GravesSmokeGrenade"));

//TODO: Add cone at end.

Spells.push_back(Graves",
		"GravesChargeShot",
		kSlotR,,
		SkillshotMissileLine,
		250,
		1100,
		100,
		2100,
		true,
		true,
		5,
		true,
		"GravesChargeShotShot"));

Spells.push_back(Graves",
		"GravesChargeShotFxMissile"));
		kSlotR,,
		SkillshotMissileLine,
		250,
		1000,
		100,
		2000,
		true,
		true,
		5,
		true,
		"GravesChargeShotFxMissile"));
#endregion Graves

#region Hecarim
Spells.push_back(Hecarim",
		"HecarimUlt",
		kSlotR,,
		SkillshotMissileLine,
		250,
		1000,
		400,
		1000,
		false,
		true,
		4,
		true,
		"hecarimultMissile"));		
#endregion Hecarim

#region Heimerdinger
Spells.push_back(Heimerdinger",
		"HeimerdingerTurretEnergyBlast",
		kSlotQ,
		SkillshotMissileLine,
		435,
		1000,
		50,
		1650,
		true,
		true,
		2,
		false,
		"HeimerdingerTurretEnergyBlast"));

Spells.push_back(Heimerdinger",
		"HeimerdingerTurretBigEnergyBlast",
		kSlotQ,
		SkillshotMissileLine,
		350,
		1000,
		75,
		1650,
		true,
		true,
		3,
		true,
		"HeimerdingerTurretBigEnergyBlast"));
,


Spells.push_back(Heimerdinger",
		"Heimerdingerwm",
		kSlotW,
		SkillshotMissileLine,
		250,
		1500,
		70,
		1800,
		true,
		true,
		2,
		false,
		"HeimerdingerWAttack2"));
		
//TODO: Add ult version of E.

Spells.push_back(Heimerdinger",
		"HeimerdingerE",
		kSlotE,
		SkillshotCircle,
		325,
		925,
		210,
		1200,
		false,
		true,
		2,
		false,
		"heimerdingerespell"));
#endregion Heimerdinger

#region Illaoi
Spells.push_back(Illaoi",
		"IllaoiQ",
		kSlotQ,
		SkillshotLine
		750,
		850,
		100,
		int.MaxValue,
		true,
		true,
		3,
		true,
		"illaoiemis"));

Spells.push_back(Illaoi",
		"IllaoiE",
		kSlotE,
		SkillshotMissileLine,
		250,
		950,
		50,
		1900,
		true,
		true,
		3,
		true,
		"illaoiemis"));

Spells.push_back(Illaoi",
		"IllaoiR",
		kSlotR,,
		SkillshotCircle,
		500,
		0,
		450,
		int.MaxValue,
		true,
		false,
		3,
		true,
		"IllaoiR"));
#endregion Illaoi

#region Irelia
Spells.push_back(Irelia",
		"IreliaTranscendentBlades",
		kSlotR,,
		SkillshotMissileLine,
		0,
		1200,
		65,
		1600,
		true,
		true,
		2,
		false,
		"IreliaTranscendentBlades"));
#endregion Irelia
    
#region Ivern
Spells.push_back(Ivern",
		"IvernQ",
		kSlotQ,
		SkillshotMissileLine,
		250,
		1100,
		65,
		1300,
		true,
		true,
		3,
		true,
		"IvernQ"));
#endregion Ivern

#region Janna
Spells.push_back(Janna",
		"JannaQ",
		kSlotQ,
		SkillshotMissileLine,
		250,
		1743,
		120,
		900,
		false,
		true,
		2,
		false,
		"HowlingGaleSpell"));
#endregion Janna

#region JarvanIV
Spells.push_back(JarvanIV",
		"JarvanIVDragonStrike",
		kSlotQ,
		SkillshotLine
		600,
		770,
		70,
		int.MaxValue,
		true,
		true,
		3,
		false,
		"JarvanIVDragonStrike"));
		
Spells.push_back(JarvanIV",
		"JarvanIVEQ",
		kSlotQ,
		SkillshotMissileLine,
		250,
		880,
		70,
		1450,
		true,
		true,
		3,
		true,
		"JarvanIVEQ"));
		
Spells.push_back(JarvanIV",
		"JarvanIVDemacianStandard",
		kSlotE,
		SkillshotCircle,
		500,
		860,
		175,
		int.MaxValue,
		false,
		true,
		2,
		false,
		"JarvanIVDemacianStandard"));

Spells.push_back(JarvanIV",
		"JarvanIVCataclysm",
		kSlotR,,
		SkillshotCircle,
		500,
		650,
		325,
		1900,
		false,
		true,
		3,
		true,
		"JarvanIVCataclysm"));
#endregion JarvanIV

#region Jayce
Spells.push_back(Jayce",
		"jayceshockblast",
		kSlotQ,
		SkillshotMissileLine,
		250,
		1570,
		70,
		1450,
		true,
		true,
		2,
		false,
		"JayceShockBlastMis"));
		
Spells.push_back(Jayce",
		"JayceQAccel",
		kSlotQ,
		SkillshotMissileLine,
		250,
		1470,
		70,
		1890,
		true,
		true,
		2,
		false,
		"JayceShockBlastWallMis"));
#endregion Jayce

#region Jhin
Spells.push_back(Jhin",
		"JhinW",
		kSlotW,
		SkillshotMissileLine,
		750,
		2550,
		40,
		5000,
		true,
		true,
		3,
		true,
		"JhinWMissile"));

Spells.push_back(Jhin",
		"JhinRShot",
		kSlotR,,
		SkillshotMissileLine,
		250,
		3500,
		80,
		5000,
		true,
		true,
		3,
		true,
		"JhinRShotMis"));
#endregion Jhin

#region Jinx
Spells.push_back(Jinx",
		"JinxW",
		kSlotW,
		SkillshotMissileLine,
		600,
		1500,
		60,
		3300,
		true,
		true,
		3,
		true,
		"JinxWMissile"));

Spells.push_back(Jinx",
		"JinxR",
		kSlotR,,
		SkillshotMissileLine,
		600,
		25000,
		140,
		1700,
		true,
		true,
		5,
		true,
		"JinxR"));
#endregion Jinx

#region Kalista
Spells.push_back(Kalista",
		"KalistaMysticShot",
		kSlotQ,
		SkillshotMissileLine,
		250,
		1200,
		40,
		1700,
		true,
		true,
		2,
		false,
		"kalistamysticshotmis"));
//TODO: Add Kalista R?
#endregion Kalista

#region Karma
Spells.push_back(Karma",
		"KarmaQ",
		kSlotQ,
		SkillshotMissileLine,
		250,
		1050,
		60,
		1700,
		true,
		true,
		2,
		false,
		"KarmaQMissile"));

//TODO: Add circle at end

Spells.push_back(Karma",
		"KarmaQMantra",
		kSlotQ,
		SkillshotMissileLine,
		250,
		950,
		80,
		1700,
		true,
		true,
		2,
		false,
		"KarmaQMissileMantra"));
#endregion Karma

#region Karthus
Spells.push_back(Karthus",
		"KarthusLayWasteA2",
		kSlotQ,
		SkillshotCircle,
		625,
		875,
		160,
		int.MaxValue,
		false,
		true,
		2,
		false,
		"KarthusLayWasteA2"));
#endregion Karthus

#region Kassadin
Spells.push_back(Kassadin",
		"ForcePulse",
		kSlotE,
		SkillshotCone,
		400,
		700,
		80,
		int.MaxValue,
		true,
		true,
		2,
		false,
		"ForcePulse"));

Spells.push_back(Kassadin",
		"RiftWalk",
		kSlotR,,
		SkillshotCircle,
		250,
		500,
		270,
		int.MaxValue,
		false,
		true,
		2,
		false,
		"RiftWalk"));
#endregion Kassadin

#region Kennen
Spells.push_back(Kennen",
		"KennenShurikenHurlMissile1",
		kSlotQ,
		SkillshotMissileLine,
		125,
		1050,
		50,
		1700,
		true,
		true,
		2,
		false,
		"KennenShurikenHurlMissile1"));
#endregion Kennen

#region Khazix
Spells.push_back(Khazix",
		"KhazixW",
		kSlotW,
		SkillshotMissileLine,
		250,
		1025,
		73,
		1700,
		true,
		true,
		2,
		false,
		"KhazixWMissile"));

Spells.push_back(Khazix",
		"KhazixE",
		kSlotE,
		SkillshotCircle,
		250,
		900,
		300,
		1500,
		false,
		true,
		2,
		false,
		"KhazixE"));
#endregion Khazix

#region Kled
Spells.push_back(Kled",
		"KledQ",
		kSlotQ,
		SkillshotMissileLine,
		250,
		800,
		45,
		1600,
		true,
		true,
		2,
		true,
		"KledQMissile"));

Spells.push_back(Kled",
		"KledRiderQ",
		kSlotQ,
		SkillshotMissileLine,
		250,
		700,
		40,
		3000,
		true,
		true,
		2,
		false,
		"KledRiderQMissile"));

Spells.push_back(Kled",
		"KledE",
		kSlotE,
		SkillshotMissileLine,
		0,
		750,
		125,
		945,
		true,
		true,
		2,
		true,
		"KledE"));
#endregion Kled

#region Kogmaw
Spells.push_back(Kogmaw",
		"KogMawQ",
		kSlotQ,
		SkillshotMissileLine,
		250,
		1200,
		70,
		1650,
		true,
		true,
		2,
		false,
		"KogMawQ"));
		
Spells.push_back(Kogmaw",
		"KogMawVoidOoze",
		kSlotE,
		SkillshotMissileLine,
		250,
		1360,
		120,
		1400,
		true,
		true,
		2,
		false,
		"KogMawVoidOozeMissile"));

Spells.push_back(Kogmaw",
		"KogMawLivingArtillery",
		kSlotR,,
		SkillshotCircle,
		1200,
		1800,
		225,
		int.MaxValue,
		false,
		true,
		2,
		false,
		"KogMawLivingArtillery",
#endregion Kogmaw

#region Leblanc

Spells.push_back(Leblanc",
		"LeblancSlide",
		kSlotW,
		SkillshotCircle,
		0,
		600,
		250,
		1450,
		false,
		true,
		2,
		false,
		"LeblancSlide"));

Spells.push_back(Leblanc",
		"LeblancSlideM",
		kSlotR,,
		SkillshotCircle,
		0,
		600,
		250,
		1450,
		false,
		true,
		2,
		false,
		"LeblancSlideM"));

Spells.push_back(Leblanc",
		"LeblancSoulShackle",
		kSlotE,
		SkillshotMissileLine,
		250,
		950,
		55,
		1750,
		true,
		true,
		3,
		true,
		"LeblancSoulShackle"));

Spells.push_back(Leblanc",
		"LeblancSoulShackleM",
		kSlotR,,
		SkillshotMissileLine,
		250,
		950,
		55,
		1750,
		true,
		true,
		3,
		true,
		"LeblancSoulShackleM"));
#endregion Leblanc

#region LeeSin
Spells.push_back(LeeSin",
		"BlindMonkQOne",
		kSlotQ,
		SkillshotMissileLine,
		250,
		1100,
		65,
		1800,
		true,
		true,
		3,
		true,
		"BlindMonkQOne"));

//TODO: Add LeeSin R?
#endregion LeeSin

#region Leona
Spells.push_back(Leona",
		"LeonaZenithBlade",
		kSlotE,
		SkillshotMissileLine,
		200,
		1000,
		70,
		2000,
		true,
		true,
		3,
		true,
		"LeonaZenithBladeMissile"));
		
Spells.push_back(Leona",
		"LeonaSolarFlare",
		kSlotR,,
		SkillshotCircle,
		1000,
		1200,
		300,
		int.MaxValue,
		false,
		true,
		5,
		true,
		"LeonaSolarFlare"));
#endregion Leona

#region Lissandra
Spells.push_back(Lissandra",
		"LissandraQ",
		kSlotQ,
		SkillshotMissileLine,
		250,
		825,
		75,
		2200,
		true,
		true,
		2,
		false,
		"LissandraQMissile"));

Spells.push_back(Lissandra",
		"LissandraQShards",
		kSlotQ,
		SkillshotMissileLine,
		250,
		825,
		90,
		2200,
		true,
		true,
		2,
		false,
		"lissandraqshards"));
		
Spells.push_back(Lissandra",
		"LissandraW",
		kSlotW,
		SkillshotCircle,
		250,
		725,
		450,
		int.MaxValue,
		true,
		true,
		3,
		true,
		"LissandraW"));

Spells.push_back(Lissandra",
		"LissandraE",
		kSlotE,
		SkillshotMissileLine,
		250,
		1050,
		125,
		850,
		true,
		true,
		2,
		false,
		"LissandraEMissile"));
#endregion Lissandra

#region Lucian
Spells.push_back(Lucian",
		"LucianQ",
		kSlotQ,
		SkillshotLine
		500,
		900,
		65,
		int.MaxValue,
		true,
		true,
		2,
		false,
		"LucianQ"));
//TODO: Add explosion

Spells.push_back(Lucian",
		"LucianW",
		kSlotW,
		SkillshotMissileLine,
		250,
		1000,
		55,
		1600,
		true,
		true,
		2,
		false,
		"lucianwMissile"));

Spells.push_back(Lucian",
		"LucianRMis",
		kSlotR,,
		SkillshotMissileLine,
		500,
		1400,
		110,
		2800,
		true,
		true,
		2,
		false,
		"lucianrmissileoffhand"));
#endregion Lucian

#region Lulu
Spells.push_back(Lulu",
		"LuluQ",
		kSlotQ,
		SkillshotMissileLine,
		250,
		950,
		60,
		1500,
		true,
		true,
		2,
		false,
		"LuluQMissile"));

Spells.push_back(Lulu",
		"LuluQPix",
		kSlotQ,
		SkillshotMissileLine,
		250,
		950,
		60,
		1500,
		true,
		true,
		2,
		false,
		"LuluQMissileTwo"));
#endregion Lulu

#region Lux
Spells.push_back(Lux",
		"LuxLightBinding",
		kSlotQ,
		SkillshotMissileLine,
		250,
		1300,
		70,
		1200,
		true,
		true,
		3,
		true,
		"LuxLightBindingMis"));

Spells.push_back(Lux",
		"LuxLightStrikeKugel",
		kSlotE,
		SkillshotCircle,
		250,
		1100,
		350,
		1300,
		false,
		true,
		2,
		false,
		"LuxLightStrikeKugel"));

Spells.push_back(Lux",
		"LuxMaliceCannon",
		kSlotR,,
		SkillshotLine
		1000,
		3500,
		190,
		int.MaxValue,
		true,
		true,
		5,
		true,
		"LuxMaliceCannon"));
#endregion Lux

#region Malphite
Spells.push_back(Malphite",
		"UFSlash",
		kSlotR,,
		SkillshotCircle,
		0,
		1000,
		300,
		1500,
		false,
		true,
		5,
		true,
		"UFSlash"));
#endregion Malphite

#region Malzahar
Spells.push_back(Malzahar",
		"MalzaharQ",
		kSlotQ,
		SkillshotLine
		750,
		900,
		85,
		int.MaxValue,
		false,
		true,
		2,
		false,

		"MalzaharQ"));
#endregion Malzahar

#region Maokai
Spells.push_back(Maokai",
		"MaokaiTrunkLine",
		kSlotQ,
		SkillshotLine
		250,
		600,
		100,
		1000,
		true,
		true,
		3,
		true,
		"MaokaiTrunkLine"));

Spells.push_back(Maokai",
		"MaokaiSapling2",
		kSlotE,
		SkillshotCircle,
		250,
		1100,
		250,
		1000,
		false,
		true,
		2,
		false,
		"MaokaiSapling2")); 
#endregion Maokai

#region Mordekaiser
Spells.push_back(Mordekaiser",
		"MordekaiserSyphonOfDestruction",
		kSlotE,
		SkillshotCone,
		350,
		675,
		160,
		3200,
		true,
		true,
		3,
		false,
		"MordekaiserSyphonOfDestruction"));
#endregion Mordekaiser

#region Morgana
Spells.push_back(Morgana",
		"DarkBindingMissile"));
		kSlotQ,
		SkillshotMissileLine,
		250,
		1300,
		85,
		1200,
		true,
		true,
		3,
		true,
		"DarkBindingMissile"));
#endregion Morgana

#region Nami

Spells.push_back(Nami",
		"namiq",
		kSlotQ,
		SkillshotCircle,
		450,
		875,
		200,
		2500,
		false,
		true,
		3,
		true,
		"namiqMissile"));
Spells.push_back(Nami",
		"NamiR",
		kSlotR,,
		SkillshotMissileLine,
		500,
		2750,
		260,
		850,
		true,
		true,
		2,
		false,
		"NamiRMissile"));
#endregion Nami

#region Nautilus
Spells.push_back(Nautilus",
		"NautilusAnchorDrag",
		kSlotQ,
		SkillshotMissileLine,
		250,
		1250,
		90,
		2000,
		true,
		true,
		3,
		true,
		"NautilusAnchorDragMissile"));
#endregion Nautilus

#region Nidalee
Spells.push_back(Nidalee",
		"JavelinToss",
		kSlotQ,
		SkillshotMissileLine,
		250,
		1500,
		40,
		1300,
		true,
		true,
		3,
		true,
		"JavelinToss"));
#endregion Nidalee

#region Nocturne
Spells.push_back(Nocturne",
		"NocturneDuskbringer",
		kSlotQ,
		SkillshotMissileLine,
		250,
		1200,
		60,
		1400,
		2,
		false,
		"NocturneDuskbringer"));
#endregion Nocturne

#region Olaf
Spells.push_back(Olaf",
		"OlafAxeThrowCast",
		kSlotQ,
		SkillshotMissileLine,
		250,
		1000,
		105,
		1600,
		false,
		true,
		2,
		false,
		"olafaxethrow"));
#endregion Olaf

#region Orianna
Spells.push_back(Orianna",
		"OriannasQ",
		kSlotQ,
		SkillshotMissileLine,
		0,
		1500,
		175,
		1200,
		false,
		true,
		2,
		false,
		"orianaizuna"));
		
Spells.push_back(Orianna",
		"OriannaQend",
		kSlotQ,
		SkillshotCircle,
		0,
		1500,
		175,
		1200,
		false,
		true,
		2,
		false,
		"OriannaQend"));

Spells.push_back(Orianna",
		"OrianaDissonanceCommand-",
		kSlotW,
		SkillshotCircle,
		250,
		0,
		255,
		int.MaxValue,
		true,
		true,
		2,
		false,
		"OrianaDissonanceCommand-"));

Spells.push_back(Orianna",
		"OriannasE",
		kSlotE,
		SkillshotMissileLine,
		0,
		1500,
		85,
		1850,
		false,
		true,
		2,
		false,
		"orianaredact"));

Spells.push_back(Orianna",
		"OrianaDetonateCommand-",
		kSlotR,,
		SkillshotCircle,
		700,
		0,
		410,
		int.MaxValue,
		true,
		true,
		5,
		true,
		"OrianaDetonateCommand-"));
#endregion Orianna

#region Pantheon
Spells.push_back(Pantheon",
		"PantheonE",
		kSlotE,
		SkillshotCone,
		250,
		600,
		50,
		1400,
		true,
		true,
		2,
		false,
		"PantheonE"));
#endregion Pantheon

#region Poppy
Spells.push_back(Poppy",
		"PoppyQ",
		kSlotQ,
		SkillshotLine
		500,
		430,
		100,
		int.MaxValue,
		true,
		true,
		2,
		false,
		"PoppyQ"));

Spells.push_back(Poppy",
		"PoppyRSpell",
		kSlotR,,
		SkillshotMissileLine,
		300,
		1900,
		100,
		1750,
		true,
		true,
		3,
		true,
		"PoppyRMissile"));
#endregion Poppy

#region Quinn
Spells.push_back(Quinn",
		"QuinnQ",
		kSlotQ,
		SkillshotMissileLine,
		313,
		1050,
		60,
		1550,
		true,
		true,
		2,
		false,
		"QuinnQ"));
#endregion Quinn

#region RekSai
Spells.push_back(RekSai",
		"reksaiqburrowed",
		kSlotQ,
		SkillshotMissileLine,
		500,
		1650,
		60,
		1950,
		true,
		true,
		3,
		false,
		"RekSaiQBurrowedMis"));
#endregion RekSai

#region Rengar
Spells.push_back(Rengar",
		"RengarE",
		kSlotE,
		SkillshotMissileLine,
		250,
		1000,
		70,
		1500,
		true,
		true,
		3,
		true,
		"RengarEFinal"));
#endregion Rengar

#region Riven

//TODO: Fix detection
Spells.push_back(Riven",
		"RivenMarty",
		kSlotW,
		SkillshotCircle,
		0,
		650,
		280,
		int.MaxValue,
		true,
		true,
		3,
		true,
		"RivenMartyr"));

Spells.push_back(Riven",
		"rivenizunablade",
		kSlotR,,
		SkillshotMissileLine,
		250,
		1100,
		125,
		1600,
		false,
		false,
		5,
		true,
		"RivenLightsaberMissile"));
#endregion Riven

#region Rumble
Spells.push_back(Rumble",
		"RumbleGrenade",
		kSlotE,
		SkillshotMissileLine,
		250,
		950,
		60,
		2000,
		true,
		true,
		2,
		false,
		"RumbleGrenade"));
		
Spells.push_back(Rumble",
		"RumbleCarpetBombM",
		kSlotR,,
		SkillshotMissileLine,
		400,
MissileDelayed = true,
		1200,
		200,
		1600,
		true,
		true,
		4,
		false,
		"RumbleCarpetBombMissile"));
#endregion Rumble

#region Ryze
Spells.push_back(Ryze",
		"RyzeQ",
		kSlotQ,
		SkillshotMissileLine,
		250,
		1000,
		55,
		1700,
		true,
		true,
		2,
		false,
		"RyzeQ"));
#endregion Ryze

#region Sejuani
Spells.push_back(Sejuani",
		"SejuaniArcticAssault",
		kSlotQ,
		SkillshotMissileLine,
		0,
		900,
		70,
		1600,
		false,
		true,
		3,
		true,
		"SejuaniArcticAssault"));

//TODO: Add AOE?

Spells.push_back(Sejuani",
		"SejuaniGlacialPrisonStart",
		kSlotR,,
		SkillshotMissileLine,
		250,
		1175,
		110,
		1600,
		true,
		true,
		3,
		true,
		"sejuaniglacialprison"));
#endregion Sejuani

#region Shen
Spells.push_back(Shen",
		"ShenE",
		kSlotE,
		SkillshotMissileLine,
		0,
		650,
		50,
		1600,
		false,
		true,
		3,
		true,
		"ShenE"));
#endregion Shen

#region Shyvana
Spells.push_back(Shyvana",
		"ShyvanaFireball",
		kSlotE,
		SkillshotMissileLine,
		250,
		950,
		60,
		1700,
		true,
		true,
		2,
		false,
		"ShyvanaFireballMissile"));

Spells.push_back(Shyvana",
		"ShyvanaTransformCast",
		kSlotR,,
		SkillshotMissileLine,
		250,
		1000,
		150,
		1500,
		true,
		true,
		3,
		true,
		"ShyvanaTransformCast"));

Spells.push_back(Shyvana",
		"shyvanafireballdragon2",
		kSlotR,,
		SkillshotMissileLine,
		250,
		925,
		70,
		2000,
		true,
		true,
		3,
		false,
		"ShyvanaFireballDragonFxMissile"));
#endregion Shyvana

#region Sion

//TODO: Add Sion Q
    
Spells.push_back(Sion",
		"SionE",
		kSlotE,
		SkillshotMissileLine,
		250,
		1500,
		80,
		1800,
		true,
		true,
		3,
		true,
		"SionEMissile"));

Spells.push_back(Sion",
		"SionR",
		kSlotR,,
		SkillshotMissileLine,
		500,
		800,
		120,
		1000,
		true,
		true,
		3,
		true,
		"SionR"));
#endregion Sion

#region Sivir
Spells.push_back(Sivir",
		"SivirQ",
		kSlotQ,
		SkillshotMissileLine,
		250,
		1250,
		90,
		1350,
		true,
		true,
		2,
		false,
		"SivirQMissile"));
		
Spells.push_back(Sivir",
		"SivirQReturn",
		kSlotQ,
		SkillshotMissileLine,
		0,
		1250,
		100,
		1350,
		true,
		true,
		2,
		false,
		"SivirQMissileReturn"));
#endregion Sivir

#region Skarner
Spells.push_back(Skarner",
		"SkarnerFracture",
		kSlotE,
		SkillshotMissileLine,
		250,
		1000,
		70,
		1500,
		true,
		true,
		2,
		false,
		"SkarnerFractureMissile"));
#endregion Skarner

#region Sona
Spells.push_back(Sona",
		"SonaR",
		kSlotR,,
		SkillshotMissileLine,
		250,
		1000,
		140,
		2400,
		true,
		true,
		5,
		true,
		"SonaR"));
#endregion Sona

#region Soraka
Spells.push_back(Soraka",
		"SorakaQ",
		kSlotQ,
		SkillshotCircle,
		500,
		950,
		260,
		1750,
		false,
		true,
		2,
		false,
		"SorakaQ"));

Spells.push_back(Soraka",
		"SorakaE",
		kSlotE,
		SkillshotCircle,
		1750,
		925,
		275,
		1750,
		false,
		true,
		3,
		false,
		"SorakaE"));
#endregion Soraka

#region Swain
Spells.push_back(Swain",
		"SwainShadowGrasp",
		kSlotW,
		SkillshotCircle,
		1100,
		900,
		250,
		int.MaxValue,
		false,
		true,
		3,
		true,
		"SwainShadowGrasp"));
#endregion Swain

#region Syndra
Spells.push_back(Syndra",
		"SyndraQ",
		kSlotQ,
		SkillshotCircle,
		600,
		800,
		150,
		int.MaxValue,
		false,
		true,
		2,
		false,
		"SyndraQ"));

Spells.push_back(Syndra",
		"syndrawcast",
		kSlotW,
		SkillshotCircle,
		250,
		950,
		210,
		1450,
		false,
		true,
		2,
		false,
		"syndrawcast"));

Spells.push_back(Syndra",
		"SyndraE",
		kSlotE,
		SkillshotMissileLine,
		0,
		1100,
		100,
		2000,
		false,
		true,
		2,
		false,
		"SyndraE"));

Spells.push_back(Syndra",
		"syndrae5",
		kSlotE,
		SkillshotMissileLine,
		0,
		1100,
		100,
		2000,
		false,
		true,
		2,
		false,
		"syndrae5"));
#endregion Syndra

#region Tahm Kench
Spells.push_back(TahmKench",
		"TahmKenchQ",
		kSlotQ,
		SkillshotMissileLine,
		250,
		951,
		90,
		2800,
		true,
		true,
		3,
		true,
		"tahmkenchqMissile"));
#endregion Tahm Kench

#region Taliyah
Spells.push_back(Taliyah",
		"TaliyahQ",
		kSlotQ,
		SkillshotMissileLine,
		250,
		1000,
		100,
		3600,
		true,
		true,
		2,
		false,
		"TaliyahQMis"));

Spells.push_back(Taliyah",
		"TaliyahWVC",
		kSlotW,
		SkillshotCircle,
		600,
		900,
		200,
		int.MaxValue,
		false,
		true,
		2,
		true,
		"TaliyahWVC"));
#endregion Taliyah

#region Talon
Spells.push_back(Talon",
		"TalonRake",
		kSlotW,
		SkillshotMissileLine,
		250,
		950,
		80,
		2300,
		true,
		true,
		2,
		true,
		"talonrakemissileone"));

Spells.push_back(Talon",
		"TalonRakeReturn",
		kSlotW,
		SkillshotMissileLine,
		250,
		950,
		80,
		1850,
		true,
		true,
		2,
		true,
		"talonrakemissiletwo"));
#endregion Talon

#region Taric
Spells.push_back(Taric",
		"TaricE",
		kSlotE,
		SkillshotLine
		1000,
		750,
		140,
		int.MaxValue,
		true,
		true,
		3,
		true,
		"TaricE"));
#endregion Taric

#region Thresh
Spells.push_back(Thresh",
		"ThreshQ",
		kSlotQ,
		SkillshotMissileLine,
		500,
		1200,
		70,
		1900,
		true,
		true,
		3,
		true,
		"ThreshQMissile"));

Spells.push_back(Thresh",
		"ThreshEFlay",
		kSlotE,
		SkillshotMissileLine,
		125,
		1075,
		110,
		2000,
		true,
		true,
		3,
		true,
		"ThreshEMissile1"));
#endregion Thresh

#region Tristana
Spells.push_back(Tristana",
		"RocketJump",
		kSlotW,
		SkillshotCircle,
		500,
		900,
		270,
		1500,
		false,
		true,
		2,
		false,
		"RocketJump"));
#endregion Tristana

#region Tryndamere
Spells.push_back(Tryndamere",
		"slashCast",
		kSlotE,
		SkillshotMissileLine,
		0,
		660,
		93,
		1300,
		false,
		true,
		2,
		false,
		"slashCast"));
#endregion Tryndamere

#region TwistedFate
Spells.push_back(TwistedFate",
		"WildCards",
		kSlotQ,
		SkillshotMissileLine,
		250,
		1450,
		40,
		1000,
		true,
		true,
		2,
		false,
		"SealFateMissile"));
#endregion TwistedFate

#region Twitch
Spells.push_back(Twitch",
		"TwitchVenomCask",
		kSlotW,
		SkillshotCircle,
		250,
		950,
		275,
		1400,
		false,
		true,
		2,
		false,
		"TwitchVenomCaskMissile"));

Spells.push_back(Twitch",
		"TwitchSprayandPrayAttack",
		kSlotR,,
		SkillshotMissileLine,
		250,
		1100,
		60,
		4000,
		true,
		true,
		2,
		false,
		"TwitchSprayandPrayAttack"));
#endregion Twitch

#region Urgot
Spells.push_back(Urgot",
		"UrgotHeatseekingLineMissile"));
		kSlotQ,
		SkillshotMissileLine,
		125,
		1000,
		60,
		1600,
		true,
		true,
		2,
		false,
		"UrgotHeatseekingLineMissile"));

Spells.push_back(Urgot",
		"UrgotPlasmaGrenade",
		kSlotE,
		SkillshotCircle,
		250,
		1100,
		210,
		1500,
		false,
		true,
		2,
		false,
		"UrgotPlasmaGrenadeBoom",
#endregion Urgot

#region Varus
Spells.push_back(Varus",
		"VarusQMissilee",
		kSlotQ,
		SkillshotMissileLine,
		250,
		1800,
		70,
		1900,
		true,
		true,
		2,
		false,
		"VarusQMissile"));

Spells.push_back(Varus",
		"VarusE",
		kSlotE,
		SkillshotCircle,
		1000,
		925,
		235,
		1500,
		false,
		true,
		2,
		false,
		"VarusE"));

Spells.push_back(Varus",
		"VarusR",
		kSlotR,,
		SkillshotMissileLine,
		250,
		1200,
		120,
		1950,
		true,
		true,
		3,
		true,
		"VarusRMissile"));
#endregion Varus

#region Veigar
Spells.push_back(Veigar",
		"VeigarBalefulStrike",
		kSlotQ,
		SkillshotMissileLine,
		250,
		950,
		70,
		2200,
		true,
		true,
		2,
		false,
		"VeigarBalefulStrikeMis"));

Spells.push_back(Veigar",
		"VeigarDarkMatter",
		kSlotW,
		SkillshotCircle,
		1350,
		900,
		225,
		int.MaxValue,
		false,
		true,
		2,
		false,
		"VeigarDarkMatter"));

Spells.push_back(Veigar",
		"VeigarEventHorizon",
		kSlotE,
		SkillshotRing,
		500,
		700,
		80,
		int.MaxValue,
		false,
		true,
		3,
		true,
		"VeigarEventHorizon"));
#endregion Veigar

#region Velkoz
Spells.push_back(Velkoz",
		"VelkozQ",
		kSlotQ,
		SkillshotMissileLine,
		250,
		1250,
		50,
		1300,
		true,
		true,
		2,
		false,
		"VelkozQMissile"));

Spells.push_back(Velkoz",
		"VelkozQSplit",
		kSlotQ,
		SkillshotMissileLine,
		250,
		1100,
		55,
		2100,
		true,
		true,
		2,
		false,
		"VelkozQMissileSplit"));

//TODO: Fix extradelay

Spells.push_back(Velkoz",
		"VelkozW",
		kSlotW,
		SkillshotMissileLine,
		250,
		1150,
		90,
		1700,
		true,
		true,
		2,
		false,
		"VelkozWMissile"));

Spells.push_back(Velkoz",
		"VelkozE",
		kSlotE,
		SkillshotCircle,
		500,
		850,
		225,
		1500,
		false,
		false,
		2,
		false,
		"VelkozEMissile"));
#endregion Velkoz

#region Vi
Spells.push_back(Vi",
		"Vi-q",
		kSlotQ,
		SkillshotMissileLine,
		250,
		1000,
		90,
		1500,
		true,
		true,
		3,
		true,
		"ViQMissile"));
#endregion Vi

#region Viktor
Spells.push_back(Viktor",
		"ViktorGravitonField",
		kSlotW,
		SkillshotCircle,
		1600,
		700,
		300,
		int.MaxValue,
		false,
		true,
		2,
		false,
		"ViktorGravitonField"));

Spells.push_back(Viktor",
		"ViktorDeathRay",
		kSlotE,
		SkillshotMissileLine,
		250,
		1500,
		80,
		1350,
		false,
		true,
		2,
		false,
		"ViktorDeathRayMissile"));

Spells.push_back(Viktor",
		"Laser",
		kSlotE,
		SkillshotMissileLine,
		250,
		1500,
		80,
		1350,
		false,
		true,
		3,
		true,
		"ViktorDeathRayMissile"));
#endregion Viktor
    

#region Vladimir

Spells.push_back(Vladimir",
		"VladimirR",
		kSlotR,,
		SkillshotCircle,
		250,
		700,
		175,
		int.MaxValue,
		false,
		true,
		3,
		true,
		"VladimirR"));
#endregion Vladimir

#region Wukong
Spells.push_back(MonkeyKing",
		"MonkeyKingSpinToWin",
		kSlotR,,
		SkillshotCircle,
		3200,
		300,
		300,
		int.MaxValue, 
		true,
		true,
		5,
		true,
		"MonkeyKingSpinToWin"));
#endregion Wukong

#region Xerath
Spells.push_back(Xerath",
		"xeratharcanopulse2",
		kSlotQ,
		SkillshotLine
		600,
		1600,
		100,
		int.MaxValue,
		true,
		true,
		2,
		false,
		"xeratharcanopulse2"));

Spells.push_back(Xerath",
		"XerathArcaneBarrage2",
		kSlotW,
		SkillshotCircle,
		700,
		1100,
		280,
		int.MaxValue,
		false,
		true,
		2,
		false,
		"XerathArcaneBarrage2",

Spells.push_back(Xerath",
		"XerathMageSpear",
		kSlotE,
		SkillshotMissileLine,
		200,
		1150,
		60,
		1400,
		true,
		true,
		2,
		true,
		"XerathMageSpearMissile"));

Spells.push_back(Xerath",
		"xerathrmissilewrapper",
		kSlotR,,
		SkillshotCircle,
		700,
		6160,
		200,
		int.MaxValue,
		false,
		true,
		3,
		true,
		"xerathrmissilewrapper"));
#endregion Xerath

#region Yasuo 
Spells.push_back(Yasuo",
		"yasuoq",
		kSlotQ,
		SkillshotLine
		400,
		550,
		20,
		int.MaxValue,
		true,
		true,
		2,
		true,
		"yasuoq"));
		
Spells.push_back(Yasuo",
		"yasuoq2",
		kSlotQ,
		SkillshotLine
		400,
		550,
		20,
		int.MaxValue,
		true,
		true,
		2,
		true,
		"yasuoq2"));

Spells.push_back(Yasuo",
		"yasuoq3w",
		kSlotQ,
		SkillshotMissileLine,
		500,
		1150,
		90,
		1500,
		true,
		true,
		3,
		true,
		"yasuoq3w"));
#endregion Yasuo
    
#region Yorick
Spells.push_back(Yorick",
		"YorickW",
		kSlotW,
		SkillshotCircle,
		500,
		600,
		250,
		int.MaxValue,
		false,
		true,
		3,
		true,
		"YorickW"));

//TODO: Yorick E
#endregion Yorick

#region Zac
Spells.push_back(Zac",
		"ZacQ",
		kSlotQ,
		SkillshotLine
		500,
		550,
		120,
		int.MaxValue,
		true,
		true,
		2,
		false,
		"ZacQ"));
		
Spells.push_back(Zac",
		"ZacE",
		kSlotE,
		SkillshotCircle,
		250,
		1800,
		300,
		1000,
		false,
		true,
		4,
		true,
		"ZacE"));

Spells.push_back(Zac",
		"ZacR",
		kSlotR,,
		SkillshotCircle,
		250,
		300,
		300,
		1000, 
		true,
		true,
		5,
		true,
		"ZacR"));
#endregion Zac

#region Zed
Spells.push_back(Zed",
		"ZedQ",
		kSlotQ,
		SkillshotMissileLine,
		250,
		925,
		50,
		1700,
		true,
		true,
		2,
		false,
		"ZedQMissile"));

//TODO: Fix Zed E
/*


Spells.push_back(Zed",
		"ZedE",
		kSlotE,
		SkillshotCircle,
		250,
		290,
		290,
		int.MaxValue,
		true,
		true,
		2,
		false,
		""));
FromObjects = new[] {"Zed_Base_W_tar.troy", "Zed_Base_W_cloneswap_buf.troy"},
*/
#endregion Zed

#region Ziggs
Spells.push_back(Ziggs",
		"ZiggsQ",
		kSlotQ,
		SkillshotCircle,
		250,
		850,
		140,
		1700,
		false,
		true,
		2,
		false,
		"ZiggsQSpell"));

Spells.push_back(Ziggs",
		"ZiggsQBounce1",
		kSlotQ,
		SkillshotCircle,
		250,
		850,
		140,
		1700,
		false,
		true,
		2,
		false,
		"ZiggsQSpell2"));

Spells.push_back(Ziggs",
		"ZiggsQBounce2",
		kSlotQ,
		SkillshotCircle,
		250,
		850,
		180,
		1700,
		false,
		true,
		2,
		false,
		"ZiggsQSpell3"));

Spells.push_back(Ziggs",
		"ZiggsW",
		kSlotW,
		SkillshotCircle,
		250,
		1000,
		275,
		3000,
		false,
		true,
		2,
		false,
		"ZiggsW"));

Spells.push_back(Ziggs",
		"ZiggsE",
		kSlotE,
		SkillshotCircle,
		500,
		900,
		235,
		1750,
		false,
		true,
		2,
		false,
		"ZiggsE"));

Spells.push_back(Ziggs",
		"ZiggsR",
		kSlotR,,
		SkillshotCircle,
		0,
		5300,
		550,
		int.MaxValue,
		false,
		true,
		2,
		false,
		"ZiggsR"));
#endregion Ziggs

#region Zilean
Spells.push_back(Zilean",
		"ZileanQ",
		kSlotQ,
		SkillshotCircle,
		250 + 450,
		900,
		140,
		int.MaxValue,
		false,
		true,
		2,
		false,
		"ZileanQMissile"));
#endregion Zilean

#region Zyra
Spells.push_back(Zyra",
		"ZyraQ",
		kSlotQ,
		SkillshotLine
		850,
		800,
		140,
		int.MaxValue,
		false,
		true,
		2,
		false,
		"ZyraQ"));
Spells.push_back(Zyra",
		"ZyraE",
		kSlotE,
		SkillshotMissileLine,
		250,
		1150,
		70,
		1150,
		true,
		true,
		3,
		true,
		"ZyraE"));
/*


Spells.push_back(Zyra",
		"zyrapassivedeathmanager",
		kSlotE,
		SkillshotMissileLine,
		500,
		1474,
		70,
		2000,
		true,
		true,
		3,
		true,
		"zyrapassivedeathmanager",

,
*/

Spells.push_back(Zyra",
		"ZyraR",
		kSlotR,,
		SkillshotCircle,
		2100,
		700,
		550,
		int.MaxValue,
		false,
		true,
		4,
		true,
		"ZyraR"));
#endregion Zyra
}
