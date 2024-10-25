#pragma once
#include <iostream>
#include "vector3f.h"
#include "Instance.h"

enum class ObjectType {
    MusicalIcicle = 0x26B920,
    MusicalIcicleRoof = 0x26BA08,
    OpalCollector = 0x26BAF0,
    CounterProp = 0x26BCB8,
    PicnicBasket = 0x26BDE0,
    PictureFrame = 0x26BE68,
    Rex = 0x26C1C8,
    SnowPile = 0x26CB88,
    SoundProp = 0x26CC70,
    spawnpoint = 0x26CD08,
    Teleporter = 0x26D6C0,
    ThinicePlate = 0x26D820,
    ThunderEggCollector = 0x26D900,
    TreasureChest = 0x26DA58,
    TriggerSphere = 0x26DB90,
    TriggerBox = 0x26DC20,
    WarpFlower = 0x26DE70,
    WaterPipeObjective = 0x26E4C8,
    WaterVolume = 0x26E560,
    WaterWheel = 0x26E640,
    Weather = 0x26E768,
    WhirlyWind = 0x26E7F8,
    YabbyStalactite = 0x26E930,
    YabbyObjective = 0x26EA30,
    RainbowScaleObjective = 0x26EAC0,
    BURNINGLOG = 0x26EB80,
    CollIceWall = 0x26EC80,
    SMASHROCK = 0x26ED80,
    Script = 0x26F480,
    ConditionalScript = 0x26F510,
    ThunderEgg = 0x270238,
    GoldenCog = 0x2702C8,
    Stopwatch = 0x2703D8,
    TimeAttack = 0x2704B8,
    Target = 0x270558,
    TyAttributes = 0x273740
};

class GameObject {
protected:
    uintptr_t address;
public:
    GameObject(uintptr_t addr);
    virtual int getCurrentCount();
    static GameObject getObject(ObjectType type);
    Instance getFirst();
    Instance getByIndex(int index);
};
