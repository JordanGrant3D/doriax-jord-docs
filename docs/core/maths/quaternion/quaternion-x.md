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

## [Quaternion](quaternion.md).x

X of the vector part (`axis.x * sin(halfAngle)`). Spins a yawed character's lean without touching yaw.

```cpp
float x;
```

```c++ title="testerScript.cpp"
--8<-- "code/maths/quaternion/quaternion-x.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/maths/quaternion/quaternion-x.h"
```


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).
