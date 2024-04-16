# UniXPActivate

POSIX port of xp_activate32.exe

## Usage

```sh
./UniXPActivate <Installation ID>
```

Or run without any arguments for interactive prompt.

```sh
# Success
./UniXPActivate 070846-984606-199354-110900-862045-444713-121295-109842-549701
Success!
Installation ID: 070846-984606-199354-110900-862045-444713-121295-109842-549701
Confirmation ID: 204455-473963-727110-378854-169136-901266-745572

# Failure
./UniXPActivate 011463-949662-622155-196245-012063-919780-616445-704832-476350
Failed!
ERROR: Unsupported key! Only Windows XP and Server 2003 are supported!
```

## Building

```sh
# sudo apt install build-essential
git clone https://github.com/iwalfy/UniXPActivate
cd UniXPActivate
make
./build/UniXPActivate
```

## Building for WebAssembly
TODO

## Testing

| Installation ID | Confirmation ID |
|-----------------|-----------------|
| 070846-984606-199354-110900-862045-444713-121295-109842-549701 | 204455-473963-727110-378854-169136-901266-745572 |
