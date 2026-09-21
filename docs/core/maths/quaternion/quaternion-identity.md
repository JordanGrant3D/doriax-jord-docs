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

## [Quaternion](quaternion.md).IDENTITY

Shorthand for writing `Quaternion(1, 0, 0, 0)` (no rotation). Resets facing and camera rotations to neutral.

```cpp
static const Quaternion IDENTITY;
```

```c++ title="testerScript.cpp"
--8<-- "code/maths/quaternion/quaternion-identity.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/maths/quaternion/quaternion-identity.h"
```


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).
