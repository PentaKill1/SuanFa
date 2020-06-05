list = {}
list.__index = list

function list:new()
	local o = {}
	setmetatable(o, list)
	o.headNode = {}
	o.headNode.data = 0 --将头结点的数据域存放链表的长度
	o.headNode.next = nil
	o.tailNode = o.headNode --tailNode是一个临时节点用来存当前的最后一个节点
	return o
end

-- 在尾部插入元素
function list:addRear(val)
	local newNode = {nextNode = nil, data = val}
	self.tailNode.next = newNode
	self.tailNode = newNode
	self.headNode.data = self.headNode.data + 1
end

-- 在头部插入元素
function list:addHead(val)
	local newNode = {} --新建一个节点
	newNode.data = val
	newNode.next = self.headNode.next
	self.headNode.next = newNode
	self.headNode.data = self.headNode.data + 1
end

-- 在指定位置插入元素
function list:insert(index, val)
	local count = self.headNode.data
	if index > count then
		print("index postion is error")
	end

	local i, j, l = index - 1, 0, self.headNode
	-- 找到第index-1的位置
	while j < i do
		j = j + 1
		l = l.next
		if not l.next then 
			break
		end
	end
	-- 插入数据
	local newNode = {}
	newNode.next = l.next
	newNode.data = val
	l.next = newNode
	self.headNode.data = self.headNode.data + 1
end

-- 删除某个位置的元素
function list:erase(index)
	local count = self.headNode.data
	if index > count then
		print("index postion is not valid")
	end

	local i, j, l = index-1, 0, self.headNode

	while j < i do
		j = j + 1
		l = l.next
		if not l then 
			break
		end
	end

	-- 删除这个节点之前要保存这个节点下一个节点的位置
	t = l.next.next 
	l.next = nil  
	l.next = t
	self.headNode.data = self.headNode.data - 1
end

-- 查找
function list:find(index)
	local count = self:size()
	if index > count then
		print("index postion is valid")
	end

	local l = self.headNode.next
	local k = 1
	while l do
		l = l.next
		k = k + 1
		if k == index then
			return l.data
		end
	end 
end

-- 长度
function list:size()
	return self.headNode.data
end

-- 迭代函数
function list:iterator()
	local index = 0
	local l = self.headNode.next
	return function()
		if not l then return end
		local val = l.data
		index = index + 1
		l = l.next
		return index, val
	end
end

-- 清空表
function list:clear()
	if not self.headNode then
		print("list is not exist")
	end

	while true do
		firstNode = self.headNode.next
		if not firstNode then
			break
		end
		tempTable = firstNode.next
		self.headNode.next = nil
		self.headNode.next = tempTable
	end

	print("表已空")
end

-- TestCase

function testCase()
	local list1 = list:new()
	-- 添加元素
	list1:addRear(5)
	list1:addRear(34)
	list1:addRear(1)
	list1:addRear(10)
	list1:addHead(3)
	list1:insert(2,12)

	-- 链表迭代器
	for k, v in list1:iterator() do
		print("添加元素之后的链表：k, v:", k, v)
	end

	-- 删除
	list1:erase(3)
	-- 查找
	print("查找index为4的元素", list1:find(4))

	-- 链表迭代器
	for k, v in list1:iterator() do
		print("删除元素之后的链表：k, v:", k, v)
	end

	print("list 长度为：",list1:size())

	-- 清空表
	list1:clear()
	print(#list1)
end
testCase()
