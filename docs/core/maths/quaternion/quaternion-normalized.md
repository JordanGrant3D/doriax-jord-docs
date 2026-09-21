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

## [Quaternion](quaternion.md).normalized()

Returns a normalized unit-length copy without modifying the original. Keeps the raw facing available for debugging afterwards.

```cpp
Quaternion normalized() const;
```

```c++ title="testerScript.cpp"
--8<-- "code/maths/quaternion/quaternion-normalized.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/maths/quaternion/quaternion-normalized.h"
```


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).
