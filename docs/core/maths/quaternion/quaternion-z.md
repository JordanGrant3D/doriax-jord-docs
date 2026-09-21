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

## [Quaternion](quaternion.md).z

Z of the vector part (`axis.z * sin(halfAngle)`). Banks the character into strafes without touching yaw or pitch.

```cpp
float z;
```

```c++ title="testerScript.cpp"
--8<-- "code/maths/quaternion/quaternion-z.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/maths/quaternion/quaternion-z.h"
```


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).
