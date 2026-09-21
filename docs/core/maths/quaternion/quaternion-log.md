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

## [Quaternion](quaternion.md).log()

Quaternion logarithm (inverse of `exp`). Recovers the angular-velocity vector hidden inside a rotation delta.

```cpp
Quaternion log() const;
```

```c++ title="testerScript.cpp"
--8<-- "code/maths/quaternion/quaternion-log.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/maths/quaternion/quaternion-log.h"
```


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).
