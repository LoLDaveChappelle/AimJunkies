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
		"AatroxEConeMissle",
		{""}));
#pragma endregion Aatrox

#pragma region Ahri
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
		"AhriOrbMissile",
		{""}));

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
		"AhriOrbReturn",
		{""}));

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
		"AhriSeduceMissile",
		{""}));
#pragma endregion Ahri

#pragma region Alistar
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
		"Pulverize",
		{""}));
#pragma endregion Alistar

#pragma region Amumu
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
		"SadMummyBandageToss",
		{""}));

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
		"CurseoftheSadMummy",
		{""}));
#pragma endregion Amumu

#pragma region Anivia
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
#pragma endregion Anivia

#pragma region Annie
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
		"Incinerate",
		{""}));

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
		"InfernalGuardian",
		{""}));
#pragma endregion Annie

#pragma region Ashe
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
		"VolleyAttack",
		{""}));

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
		"EnchantedCrystalArrow",
		{""}));
#pragma endregion Ashe

#pragma region Aurelion Sol
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
		"AurelionSolQMissile",
		{""}));

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
		"AurelionSolRBeamMissile",
		{""}));
#pragma endregion Aurelion Sol
    
#pragma region Azir
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
		"AzirQSoldier",
		{""}));

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
		"AzirSoldierRMissile",
		{""}));
#pragma endregion Azir
    
#pragma region Bard
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
		"BardQMissile",
		{""}));

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
		"BardR",
		{""}));
#pragma endregion Bard

#pragma region Blitzcrank
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
		"RocketGrabMissile",
		{""}));

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
		"StaticField",
		{""}));
#pragma endregion Blitzcrank

#pragma region Brand
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
		"BrandQMissile",
		{""}));

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
		"BrandW",
		{""}));
#pragma endregion Brand

#pragma region Braum
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
		"BraumQMissile",
		{""}));

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
		"braumrMissile",
		{""}));
#pragma endregion Braum

#pragma region Caitlyn
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
		"CaitlynPiltoverPeacemaker",
		{""}));

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
		"CaitlynEntrapmentMissile",
		{""}));
#pragma endregion Caitlyn

#pragma region Cassiopeia
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
		"CassiopeiaQ",
		{""}));

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
		"CassiopeiaR",
		{""}));
#pragma endregion Cassiopeia

#pragma region Chogath
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
		"Rupture",
		{""}));

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
		"FeralScream",
		{""}));
#pragma endregion Chogath

#pragma region Corki
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
		"PhosphorusBombMissile",
		{""}));

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
		"MissileBarrageMissile",
		{""}));

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
		"MissileBarrageMissile2",
		{""}));
#pragma endregion Corki

#pragma region Darius
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
		"DariusCleave",
		{""}));

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
		"DariusAxeGrabCone",
		{""}));
#pragma endregion Darius

#pragma region Diana
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
		"DianaArcArc",
		{""}));
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
		"DianaArcArc",
		{""}));
#pragma endregion Diana

#pragma region DrMundo
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
		"InfectedCleaverMissile",
		{""}));
#pragma endregion DrMundo

#pragma region Draven
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
		"DravenDoubleShotMissile",
		{""}));
		
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
		"DravenR",
		{""}));
#pragma endregion Draven

#pragma region Ekko
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
		"ekkoqmis",
		{""}));

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
		"EkkoW",
		{""}));

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
		"EkkoR",
		{""}));
#pragma endregion Ekko

#pragma region Elise
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
		"EliseHumanE",
		{""}));
#pragma endregion Elise

#pragma region Evelynn
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
		"EvelynnR",
		{""}));
#pragma endregion Evelynn

#pragma region Ezreal
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
		"EzrealMysticShotMissile",
		{""}));
		
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
		"EzrealEssenceFluxMissile",
		{""}));
		
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
		"EzrealTrueshotBarrage",
		{""}));
#pragma endregion Ezreal

#pragma region Fiora
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
		"FioraWMissile",
		{""}));
#pragma endregion Fiora

#pragma region Fizz
    
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
		"FizzRMissile",
		{""}));
#pragma endregion Fizz

#pragma region Galio
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
		"GalioResoluteSmite",
		{""}));
		
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
		"GalioRighteousGust",
		{""}));

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
		"GalioIdolOfDurand",
		{""}));
#pragma endregion Galio

#pragma region Gnar
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
		"gnarqMissile",
		{""}));

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
		"GnarBigQMissile",
		{""}));

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
		"GnarBigW",
		{""}));
		
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
		"GnarE",
		{""}));

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
		"GnarBigE",
		{""}));

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
		"GnarR",
		{""}));
#pragma endregion Gnar

#pragma region Gragas
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
		"GragasQMissile",
		{""}));

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
		"GragasE",
		{""}));

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
		"GragasRBoom",
		{""}));
#pragma endregion Gragas

#pragma region Graves

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
		"GravesQLineMis",
		{""}));

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
		"GravesSmokeGrenade",
		{""}));

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
		"GravesChargeShotShot",
		{""}));

Spells.push_back(Graves",
		"GravesChargeShotFxMissile",
		{""}));
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
		"GravesChargeShotFxMissile",
		{""}));
#pragma endregion Graves

#pragma region Hecarim
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
		"hecarimultMissile",
		{""}));		
#pragma endregion Hecarim

#pragma region Heimerdinger
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
		"HeimerdingerTurretEnergyBlast",
		{""}));

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
		"HeimerdingerTurretBigEnergyBlast",
		{""}));
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
		"HeimerdingerWAttack2",
		{""}));
		
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
		"heimerdingerespell",
		{""}));
#pragma endregion Heimerdinger

#pragma region Illaoi
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
		"illaoiemis",
		{""}));

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
		"illaoiemis",
		{""}));

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
		"IllaoiR",
		{""}));
#pragma endregion Illaoi

#pragma region Irelia
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
		"IreliaTranscendentBlades",
		{""}));
#pragma endregion Irelia
    
#pragma region Ivern
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
		"IvernQ",
		{""}));
#pragma endregion Ivern

#pragma region Janna
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
		"HowlingGaleSpell",
		{""}));
#pragma endregion Janna

#pragma region JarvanIV
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
		"JarvanIVDragonStrike",
		{""}));
		
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
		"JarvanIVEQ",
		{""}));
		
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
		"JarvanIVDemacianStandard",
		{""}));

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
		"JarvanIVCataclysm",
		{""}));
#pragma endregion JarvanIV

#pragma region Jayce
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
		"JayceShockBlastMis",
		{""}));
		
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
		"JayceShockBlastWallMis",
		{""}));
#pragma endregion Jayce

#pragma region Jhin
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
		"JhinWMissile",
		{""}));

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
		"JhinRShotMis",
		{""}));
#pragma endregion Jhin

#pragma region Jinx
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
		"JinxWMissile",
		{""}));

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
		"JinxR",
		{""}));
#pragma endregion Jinx

#pragma region Kalista
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
		"kalistamysticshotmis",
		{""}));
//TODO: Add Kalista R?
#pragma endregion Kalista

#pragma region Karma
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
		"KarmaQMissile",
		{""}));

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
		"KarmaQMissileMantra",
		{""}));
#pragma endregion Karma

#pragma region Karthus
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
		"KarthusLayWasteA2",
		{""}));
#pragma endregion Karthus

#pragma region Kassadin
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
		"ForcePulse",
		{""}));

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
		"RiftWalk",
		{""}));
#pragma endregion Kassadin

#pragma region Kennen
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
		"KennenShurikenHurlMissile1",
		{""}));
#pragma endregion Kennen

#pragma region Khazix
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
		"KhazixWMissile",
		{""}));

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
		"KhazixE",
		{""}));
#pragma endregion Khazix

#pragma region Kled
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
		"KledQMissile",
		{""}));

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
		"KledRiderQMissile",
		{""}));

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
		"KledE",
		{""}));
#pragma endregion Kled

#pragma region Kogmaw
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
		"KogMawQ",
		{""}));
		
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
		"KogMawVoidOozeMissile",
		{""}));

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
#pragma endregion Kogmaw

#pragma region Leblanc

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
		"LeblancSlide",
		{""}));

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
		"LeblancSlideM",
		{""}));

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
		"LeblancSoulShackle",
		{""}));

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
		"LeblancSoulShackleM",
		{""}));
#pragma endregion Leblanc

#pragma region LeeSin
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
		"BlindMonkQOne",
		{""}));

//TODO: Add LeeSin R?
#pragma endregion LeeSin

#pragma region Leona
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
		"LeonaZenithBladeMissile",
		{""}));
		
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
		"LeonaSolarFlare",
		{""}));
#pragma endregion Leona

#pragma region Lissandra
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
		"LissandraQMissile",
		{""}));

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
		"lissandraqshards",
		{""}));
		
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
		"LissandraW",
		{""}));

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
		"LissandraEMissile",
		{""}));
#pragma endregion Lissandra

#pragma region Lucian
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
		"LucianQ",
		{""}));
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
		"lucianwMissile",
		{""}));

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
		"lucianrmissileoffhand",
		{""}));
#pragma endregion Lucian

#pragma region Lulu
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
		"LuluQMissile",
		{""}));

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
		"LuluQMissileTwo",
		{""}));
#pragma endregion Lulu

#pragma region Lux
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
		"LuxLightBindingMis",
		{""}));

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
		"LuxLightStrikeKugel",
		{""}));

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
		"LuxMaliceCannon",
		{""}));
#pragma endregion Lux

#pragma region Malphite
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
		"UFSlash",
		{""}));
#pragma endregion Malphite

#pragma region Malzahar
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

		"MalzaharQ",
		{""}));
#pragma endregion Malzahar

#pragma region Maokai
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
		"MaokaiTrunkLine",
		{""}));

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
		"MaokaiSapling2",
		{""})); 
#pragma endregion Maokai

#pragma region Mordekaiser
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
		"MordekaiserSyphonOfDestruction",
		{""}));
#pragma endregion Mordekaiser

#pragma region Morgana
Spells.push_back(Morgana",
		"DarkBindingMissile",
		{""}));
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
		"DarkBindingMissile",
		{""}));
#pragma endregion Morgana

#pragma region Nami

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
		"namiqMissile",
		{""}));
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
		"NamiRMissile",
		{""}));
#pragma endregion Nami

#pragma region Nautilus
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
		"NautilusAnchorDragMissile",
		{""}));
#pragma endregion Nautilus

#pragma region Nidalee
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
		"JavelinToss",
		{""}));
#pragma endregion Nidalee

#pragma region Nocturne
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
		"NocturneDuskbringer",
		{""}));
#pragma endregion Nocturne

#pragma region Olaf
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
		"olafaxethrow",
		{""}));
#pragma endregion Olaf

#pragma region Orianna
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
		"orianaizuna",
		{""}));
		
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
		"OriannaQend",
		{""}));

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
		"OrianaDissonanceCommand-",
		{""}));

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
		"orianaredact",
		{""}));

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
		"OrianaDetonateCommand-",
		{""}));
#pragma endregion Orianna

#pragma region Pantheon
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
		"PantheonE",
		{""}));
#pragma endregion Pantheon

#pragma region Poppy
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
		"PoppyQ",
		{""}));

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
		"PoppyRMissile",
		{""}));
#pragma endregion Poppy

#pragma region Quinn
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
		"QuinnQ",
		{""}));
#pragma endregion Quinn

#pragma region RekSai
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
		"RekSaiQBurrowedMis",
		{""}));
#pragma endregion RekSai

#pragma region Rengar
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
		"RengarEFinal",
		{""}));
#pragma endregion Rengar

#pragma region Riven

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
		"RivenMartyr",
		{""}));

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
		"RivenLightsaberMissile",
		{""}));
#pragma endregion Riven

#pragma region Rumble
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
		"RumbleGrenade",
		{""}));
		
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
		"RumbleCarpetBombMissile",
		{""}));
#pragma endregion Rumble

#pragma region Ryze
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
		"RyzeQ",
		{""}));
#pragma endregion Ryze

#pragma region Sejuani
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
		"SejuaniArcticAssault",
		{""}));

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
		"sejuaniglacialprison",
		{""}));
#pragma endregion Sejuani

#pragma region Shen
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
		"ShenE",
		{""}));
#pragma endregion Shen

#pragma region Shyvana
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
		"ShyvanaFireballMissile",
		{""}));

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
		"ShyvanaTransformCast",
		{""}));

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
		"ShyvanaFireballDragonFxMissile",
		{""}));
#pragma endregion Shyvana

#pragma region Sion

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
		"SionEMissile",
		{""}));

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
		"SionR",
		{""}));
#pragma endregion Sion

#pragma region Sivir
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
		"SivirQMissile",
		{""}));
		
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
		"SivirQMissileReturn",
		{""}));
#pragma endregion Sivir

#pragma region Skarner
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
		"SkarnerFractureMissile",
		{""}));
#pragma endregion Skarner

#pragma region Sona
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
		"SonaR",
		{""}));
#pragma endregion Sona

#pragma region Soraka
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
		"SorakaQ",
		{""}));

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
		"SorakaE",
		{""}));
#pragma endregion Soraka

#pragma region Swain
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
		"SwainShadowGrasp",
		{""}));
#pragma endregion Swain

#pragma region Syndra
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
		"SyndraQ",
		{""}));

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
		"syndrawcast",
		{""}));

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
		"SyndraE",
		{""}));

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
		"syndrae5",
		{""}));
#pragma endregion Syndra

#pragma region Tahm Kench
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
		"tahmkenchqMissile",
		{""}));
#pragma endregion Tahm Kench

#pragma region Taliyah
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
		"TaliyahQMis",
		{""}));

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
		"TaliyahWVC",
		{""}));
#pragma endregion Taliyah

#pragma region Talon
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
		"talonrakemissileone",
		{""}));

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
		"talonrakemissiletwo",
		{""}));
#pragma endregion Talon

#pragma region Taric
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
		"TaricE",
		{""}));
#pragma endregion Taric

#pragma region Thresh
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
		"ThreshQMissile",
		{""}));

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
		"ThreshEMissile1",
		{""}));
#pragma endregion Thresh

#pragma region Tristana
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
		"RocketJump",
		{""}));
#pragma endregion Tristana

#pragma region Tryndamere
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
		"slashCast",
		{""}));
#pragma endregion Tryndamere

#pragma region TwistedFate
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
		"SealFateMissile",
		{""}));
#pragma endregion TwistedFate

#pragma region Twitch
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
		"TwitchVenomCaskMissile",
		{""}));

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
		"TwitchSprayandPrayAttack",
		{""}));
#pragma endregion Twitch

#pragma region Urgot
Spells.push_back(Urgot",
		"UrgotHeatseekingLineMissile",
		{""}));
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
		"UrgotHeatseekingLineMissile",
		{""}));

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
#pragma endregion Urgot

#pragma region Varus
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
		"VarusQMissile",
		{""}));

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
		"VarusE",
		{""}));

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
		"VarusRMissile",
		{""}));
#pragma endregion Varus

#pragma region Veigar
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
		"VeigarBalefulStrikeMis",
		{""}));

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
		"VeigarDarkMatter",
		{""}));

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
		"VeigarEventHorizon",
		{""}));
#pragma endregion Veigar

#pragma region Velkoz
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
		"VelkozQMissile",
		{""}));

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
		"VelkozQMissileSplit",
		{""}));

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
		"VelkozWMissile",
		{""}));

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
		"VelkozEMissile",
		{""}));
#pragma endregion Velkoz

#pragma region Vi
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
		"ViQMissile",
		{""}));
#pragma endregion Vi

#pragma region Viktor
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
		"ViktorGravitonField",
		{""}));

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
		"ViktorDeathRayMissile",
		{""}));

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
		"ViktorDeathRayMissile",
		{""}));
#pragma endregion Viktor
    

#pragma region Vladimir

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
		"VladimirR",
		{""}));
#pragma endregion Vladimir

#pragma region Wukong
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
		"MonkeyKingSpinToWin",
		{""}));
#pragma endregion Wukong

#pragma region Xerath
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
		"xeratharcanopulse2",
		{""}));

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
		"XerathMageSpearMissile",
		{""}));

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
		"xerathrmissilewrapper",
		{""}));
#pragma endregion Xerath

#pragma region Yasuo 
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
		"yasuoq",
		{""}));
		
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
		"yasuoq2",
		{""}));

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
		"yasuoq3w",
		{""}));
#pragma endregion Yasuo
    
#pragma region Yorick
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
		"YorickW",
		{""}));

//TODO: Yorick E
#pragma endregion Yorick

#pragma region Zac
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
		"ZacQ",
		{""}));
		
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
		"ZacE",
		{""}));

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
		"ZacR",
		{""}));
#pragma endregion Zac

#pragma region Zed
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
		"ZedQMissile",
		{""}));

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
		"",
		{""}));
FromObjects = new[] {"Zed_Base_W_tar.troy", "Zed_Base_W_cloneswap_buf.troy"},
*/
#pragma endregion Zed

#pragma region Ziggs
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
		"ZiggsQSpell",
		{""}));

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
		"ZiggsQSpell2",
		{""}));

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
		"ZiggsQSpell3",
		{""}));

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
		"ZiggsW",
		{""}));

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
		"ZiggsE",
		{""}));

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
		"ZiggsR",
		{""}));
#pragma endregion Ziggs

#pragma region Zilean
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
		"ZileanQMissile",
		{""}));
#pragma endregion Zilean

#pragma region Zyra
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
		"ZyraQ",
		{""}));
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
		"ZyraE",
		{""}));
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
		"ZyraR",
		{""}));
#pragma endregion Zyra
}
