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

## [Quaternion](quaternion.md).y

Y of the vector part (`axis.y * sin(halfAngle)`). Carries the CharacterController yaw: a pure Y spin has `x == z == 0`.

```cpp
float y;
```

```c++ title="testerScript.cpp"
--8<-- "code/maths/quaternion/quaternion-y.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/maths/quaternion/quaternion-y.h"
```


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).
