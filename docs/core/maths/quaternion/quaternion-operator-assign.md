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

## [Quaternion](quaternion.md).operator=(const Quaternion& rkQ)

Copies `w`, `x`, `y`, `z` and returns `*this`. Snapshots a tuned facing before blending toward a new one.

```cpp
Quaternion& operator=(const Quaternion& rkQ);
```

```c++ title="testerScript.cpp"
--8<-- "code/maths/quaternion/quaternion-operator-assign.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/maths/quaternion/quaternion-operator-assign.h"
```


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).
