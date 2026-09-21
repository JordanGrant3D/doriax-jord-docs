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

## [Quaternion](quaternion.md).normalizeL()

Normalizes in place like `normalize()`, but returns the pre-normalization `norm()` (squared length). One call repairs the facing and reports the drift.

```cpp
float normalizeL();
```

```c++ title="testerScript.cpp"
--8<-- "code/maths/quaternion/quaternion-normalize-l.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/maths/quaternion/quaternion-normalize-l.h"
```


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).
