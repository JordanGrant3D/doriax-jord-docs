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

## [Quaternion](quaternion.md).w

Scalar component (`cos(halfAngle)`). `1` with a zero vector part means no rotation; `0` means a 180-degree flip.

```cpp
float w;
```

```c++ title="testerScript.cpp"
--8<-- "code/maths/quaternion/quaternion-w.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/maths/quaternion/quaternion-w.h"
```


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).
