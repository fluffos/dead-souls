# The Dead Souls 3.8.6 with FluffOS v2019

## Current status

- [X] : Boots.
- [X] : works under Websocket.
- [ ] : Don't require special configs from FluffOS 2019.
- [ ] : No warning or errors

## How to test for now

1. Get FluffOS v2019 release, change ```#define OLD_ED to #undef OLD_ED in local_options```
2. cp driver bin/ && cd bin/
3. ./driver mudos.cfg

## Admin

1. Edit ```lib/secure/cfg/groups.cfg``` and replace ```sunyc``` with the lower-case name of your admin character you will create below.
2. Connect via web browser to http://localhost:5555 or via mudclient to localhost port 6666.
3. Select Creator instead of player.
4. Set your character name to match the name you used above.
5. Enjoy!

## Screenshot

![image](https://user-images.githubusercontent.com/1256464/71966839-2f444180-31b7-11ea-8cd4-f2fdf5f0cec7.png)

## Contribution

Send PR to fix stuff! 
