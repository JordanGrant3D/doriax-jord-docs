[//]: # (If the following warning for UNTESTED is not commented out and you test it, and if needed fix midding or incorrect refrences then manually comment it)
[//]: # (DO not remove it!)
[//]: # (###### **! UNTESTED !, Code may be out of date, or some references may be modified/missing !**)

[//]: # (If you check the file and it is up to date, set version to the TARGET_VERSION.txt manually. Do not remove this comment)
###### version: 0.7.1
---
Quaternion
---

<style>
  .md-content h1:first-of-type { display: none; }
</style>

## [Quaternion](quaternion.md).slerpExtraSpins(fT, rkP, rkQ, iExtraSpins)

Static slerp plus `iExtraSpins` full turns phased across the blend. Spins a victory twirl while still landing on the target facing.

```cpp
static Quaternion slerpExtraSpins(float fT, const Quaternion& rkP, const Quaternion& rkQ, int iExtraSpins);
```

```c++ title="testerScript.cpp"
--8<-- "code/maths/quaternion/quaternion-slerp-extra-spins.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/maths/quaternion/quaternion-slerp-extra-spins.h"
```


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).
