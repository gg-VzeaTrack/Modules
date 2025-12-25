
local self = {}

local World1, World2, World3 = nil, nil, nil
local place = game.PlaceId

function self.world()
    if place == 2753915549 or place == 85211729168715 then
        World1 = true
    elseif place == 4442272183 or place == 79091703265657 then
        World2 = true
    elseif place == 7449423635 or place == 100117331123089 then
        World3 = true
    else
        game.Players.LocalPlayer:Kick("❌ Error : A[26]Blox Fruits ❌")
    end
    return World1, World2, World3
end

return self
