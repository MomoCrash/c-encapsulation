#ifndef ILIVE_H__
#define ILIVE_H__

class Alive {

public:
	float maxHealth;
	float health;

	Alive(float _mHealth, float _h);

	virtual bool IsAlive();

	virtual float GetMaxHealth();
	virtual float GetHealth();
	virtual void Damage(float amount) = 0;
	virtual void Heal(float amount) = 0;

};

#endif // !ILIVE_H__