---
version: 0.7.1
status: bot-tested # Options: untested, bot-tested, human-tested
---
---
Body2D
---

<style>
  .md-content h1:first-of-type { display: none; }
</style>

## [Body2D](body-2d.md).sleep()

Sleeping lets idle bodies skip simulation until something touches or wakes them. `setEnableSleep` / `isEnableSleep` control the permission (allowed to sleep or never sleeps), while `setAwake` / `isAwake` control the current state — force a body awake when activating it, or put it to rest after a scripted sequence.

```cpp
void setEnableSleep(bool enableSleep);
bool isEnableSleep() const;
void setAwake(bool awake);
bool isAwake() const;
```

```c++ title="testerScript.cpp"
--8<-- "code/core/object/physics/2D/body-2d/body-2d-sleep.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/core/object/physics/2D/body-2d/body-2d-sleep.h"
```


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).
