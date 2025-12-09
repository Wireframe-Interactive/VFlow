#pragma once

struct HumanComponent {
	size_t age = 1;
	size_t contactsPerDay = 2;
	size_t maxWakeupTime = 6;
	size_t minWakeupTime = 12;
	size_t maxSleepTime = 6;
	size_t minSleepTime = 10;
	float strictness = 0.5f;
	float immunity = 0.7f;
	bool isInfected = false;
	enum class HumanType { Infant, Baby, Kid, Teenager, Yoth, Adult, Elder};
};

struct VirusComponent {
	float infectionRate = 0.1f;
	size_t minIncubationDays = 2;
	size_t maxIncubationDays = 14;
	size_t maxRecuprateDays= 20;
	size_t minRecuprateDays= 5;
};

struct CityComponent {
	size_t population = 20000000;
	size_t alive = 20000000;
	size_t dead = 0;
	size_t hospitals = 825;
	size_t doctors = 133540;
	size_t nurse = 133540*2;
	float safety = 0.4f;
};