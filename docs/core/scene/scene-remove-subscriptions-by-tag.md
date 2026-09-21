---
version: 0.7.1
status: bot-tested # Options: untested, bot-tested, human-tested
---
---
Scene
---

<style>
  .md-content h1:first-of-type { display: none; }
</style>

## [Scene](scene.md).removeSubscriptionsByTag()

Removes all event subscriptions whose tag string contains `substring`. A CharacterController cleanup script calls it on teardown so no stale callbacks fire for a destroyed player.

```cpp
void removeSubscriptionsByTag(const std::string& substring);
```

```c++ title="testerScript.cpp"
--8<-- "code/core/scene/scene-remove-subscriptions-by-tag.cpp"
```

```c++ title="testerScript.h"
--8<-- "code/core/scene/scene-remove-subscriptions-by-tag.h"
```


---
Found an issue? [Report it here](https://github.com/JordanGrant3D/doriax-jord-docs/issues).
