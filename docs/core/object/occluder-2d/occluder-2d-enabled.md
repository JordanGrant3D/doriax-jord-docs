---
version: 0.7.1
status: bot-tested # Options: untested, bot-tested, human-tested
---
---
Occluder2D
---

<style>
  .md-content h1:first-of-type { display: none; }
</style>

## [Occluder2D](occluder-2d.md).isEnabled

Toggles the occluder without removing the component; disabled occluders cast no shadows. The stealth gallery disables walls during blackouts so guards lose cover.

```cpp
void setEnabled(bool enabled);
bool isEnabled() const;
```

```c++ title="testerScript.cpp"
--8<-- "code/core/object/occluder-2d/occluder-2d-enabled.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/core/object/occluder-2d/occluder-2d-enabled.h"
```


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).
