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

## [Quaternion](quaternion.md).getRoll()

Extracts the roll angle (engine-default units) from the rotation. Banks the HUD horizon indicator.

```cpp
float getRoll() const;
```

```c++ title="testerScript.cpp"
--8<-- "code/maths/quaternion/quaternion-get-roll.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/maths/quaternion/quaternion-get-roll.h"
```


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).
