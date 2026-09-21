---
version: 0.7.1
status: bot-tested # Options: untested, bot-tested, human-tested
---
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
