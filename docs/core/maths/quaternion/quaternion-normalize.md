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

## [Quaternion](quaternion.md).normalize()

Normalizes in place to unit length and returns `*this`. Call after hand-editing components or accumulating `exp()` steps.

```cpp
Quaternion& normalize();
```

```c++ title="testerScript.cpp"
--8<-- "code/maths/quaternion/quaternion-normalize.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/maths/quaternion/quaternion-normalize.h"
```


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).
